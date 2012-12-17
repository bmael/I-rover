/* ***************************************************
 * File mapmenu.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "mapmenu.h"
#include "ui_mapmenu.h"

#include <QFileDialog>

#include <QStyleOption>
#include <QPainter>
#include <QStyle>
#include <QMessageBox>
#include <QDebug>
#include <QThread>
#include <QDesktopWidget>

#include "robot.h"
#include "gestionnaireMap.h"
#include "mission_parser.h"
#include "loadingwidget.h"

/**
 * @brief Constructs a new MapMenu.
 * @param parent
 */
MapMenu::MapMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MapMenu)
{
    ui->setupUi(this);
    this->setStyleSheet("MapMenu {background-image: url(:/backgrounds/widgetsbg);}");
}

MapMenu::~MapMenu()
{
    delete ui;
}

/**
  * @brief Open a file dialog to choose a map and write the path of the file on the
  * lineEdit.
  * @pre The Map have to be a TMX File
  *
  */
void MapMenu::on_browseMapPushButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open a map", QString(),QString("*.tmx"));
    ui->mapLineEdit->setText(file);
}

/**
  * @brief Open a file dialog to choose a mission and write the path of the file on the
  * lineEdit.
  * @pre The Mission have to be in a right XML format
  *
  */
void MapMenu::on_browseMissionPushButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open a mission", QString(),QString("*.xml"));
    ui->missionLineEdit->setText(file);
}

/**
 * @brief Open a file dialog to choose a exploration startegy.
 * @pre The strategy have to be in python
 */
void MapMenu::on_strategyPushButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Open a strategy", QString(),QString("*.py"));
    ui->strategyLineEdit->setText(file);
}

/**
  * @brief Ask to load the map on the scene and ask to load robot information according to the mission selected.
  */
void MapMenu::on_loadPushButton_clicked()
{

    // Open the LoadingWidget
    LoadingWidget * loading = new LoadingWidget(this);
    connect(this, SIGNAL(askUpdateLoading(int,QString)), loading, SLOT(update(int,QString)));
    loading->setWindowFlags(Qt::WindowStaysOnTopHint);
    loading->setWindowTitle("Loading...");
    loading->setModal(false);
    loading->show();

        // New Thread for the loadingWidget
        QThread * loadingThread = new QThread(this);

        connect(loadingThread,SIGNAL(started()),loading, SLOT(show()));
        connect(loadingThread,SIGNAL(finished()),loading,SLOT(deleteLater()));


        loadingThread->start();

    // Initialize the map
    try{
        emit askUpdateLoading(0,"Parsing the tmx file...");
        GestionnaireMap::getInstance((char *)ui->mapLineEdit->text().toStdString().c_str());
        emit askUpdateLoading(60,"Parsing the tmx file done");
    }catch(int e){
        qDebug() << "map initialization error";
        QMessageBox::warning(this,"Error for map","Error during map initialization");
    }

    // Ask to load the map to the scene.
    emit askUpdateLoading(61,"Loading the map on the scene...");
    emit askLoadMap(ui->mapLineEdit->text());
    emit askUpdateLoading(70,"Map loaded on the scene.");

    // Initialize the robot
    emit askUpdateLoading(71,"Cleaning Robot instance if exists...");
    Robot::getInstance()->clear(); //clear the old version of the robot
    emit askUpdateLoading(72,"Robot cleaned.");

    // Call the parser of mission to initialize the current robot.
    emit askUpdateLoading(73,"Initializing Robot with mission selected...");
    Robot::getInstance()->init(std::string(""),
                               parse_sensors((char *)ui->missionLineEdit->text().toStdString().c_str()),
                               parse_actuators((char *)ui->missionLineEdit->text().toStdString().c_str()),
                               parse_movementActuator((char *)ui->missionLineEdit->text().toStdString().c_str()),
                               parse_start_position((char *)ui->missionLineEdit->text().toStdString().c_str()));

    emit askLoadRobot();
    emit askUpdateLoading(75,"Robot initialized.");

    emit askUpdateLoading(76,"Loading mission information....");
    QString desc = QString::fromStdString(parse_description((char *)ui->missionLineEdit->text().toStdString().c_str()));
    qDebug() << desc;
    emit askLoadMission(desc);

    ui->loadPushButton->setEnabled(false);

    emit askUpdateLoading(100,"Done.");
    delete loading;

}

/**
 * @brief Sets the Load Button enabled.
 */
void MapMenu::allowReloadButton()
{
    ui->loadPushButton->setEnabled(true);
}

/**
  * @brief Override paintEvent for MapMenu. Need it to apply a css to a QWidget.
  */
void MapMenu::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}



