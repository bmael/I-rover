#include "mapmenu.h"
#include "ui_mapmenu.h"

#include <QFileDialog>

#include <QStyleOption>
#include <QPainter>
#include <QStyle>
#include <QMessageBox>
#include <QDebug>

#include "robot.h"
#include "gestionnaireMap.h"
#include "mission_parser.h"

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
    // Initialize the map
    try{
        GestionnaireMap * g = new GestionnaireMap((char *)ui->mapLineEdit->text().toStdString().c_str());

    }catch(int e){
        qDebug() << "map initialization error";
        QMessageBox::warning(this,"Error for map","Error during map initialization");
    }
    // Ask to load the map to the scene.
    emit askLoadMap(ui->mapLineEdit->text());

    // Initialize the robot
    Robot::getInstance()->clear(); //clear the old version of the robot

    // Call the parser of mission to initialize the current robot.
    Robot::getInstance()->init(std::string(""),
                               parse_sensors((char *)ui->missionLineEdit->text().toStdString().c_str()),
                               parse_actuators((char *)ui->missionLineEdit->text().toStdString().c_str()),
                               parse_movementActuator((char *)ui->missionLineEdit->text().toStdString().c_str()),
                               parse_start_position((char *)ui->missionLineEdit->text().toStdString().c_str()));

    emit askLoadRobot();
    emit askLoadMission(QString::fromStdString(parse_description((char *)ui->missionLineEdit->text().toStdString().c_str())));
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



