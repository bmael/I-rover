#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPropertyAnimation>
#include <QDebug>
#include "widgets/aboutdialog.h"
#include "mapRenderer.h"
#include "gestionnaireMap.h"
#include "robot.h"

#define SIZE_SQUARE 60

/**
 * @brief Constructs a new MainWindow widget. It's the main window of our application
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialization of the scene and its components.
    _scene = new QGraphicsScene;
    _mapItem = new QGraphicsPixmapItem;
    _robotItem = new QGraphicsPixmapItem;

    _scene->addItem(_mapItem);
    _scene->addItem(_robotItem);
    ui->mapGraphicsView->setScene(_scene);

    // connection for loading/unloading the map
    connect(ui->leftMenuWidget, SIGNAL(askMapLoad(QString)), this, SLOT(mapLoader(QString)));
    connect(ui->leftMenuWidget, SIGNAL(askUnloadMap()), this, SLOT(unloadMap()));

    // conection for loading/unloading robot
    connect(ui->leftMenuWidget, SIGNAL(askLoadRobot()), this, SLOT(loadRobot()));
    connect(ui->leftMenuWidget,SIGNAL(askUnloadRobot()), this, SLOT(unloadRobot()));
}

/**
 * @brief Destroys the MainWindow widget
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
  * @brief Show or hide the left menu with an animation.
  */
void MainWindow::on_showHideLeftMenuPushButton_clicked()
{
    QPropertyAnimation * animation = new QPropertyAnimation(ui->leftMenuWidget, "maximumWidth");

    animation->setDuration(1000);
    animation->setStartValue(ui->leftMenuWidget->maximumWidth());

    if(!_leftMenuHidden){
        animation->setEndValue(0);
        animation->setEasingCurve(QEasingCurve::InBack);

        ui->showHideLeftMenuPushButton->setIcon(QIcon(":/icons/deploy"));
        _leftMenuHidden = true;
    }
    else{
        ui->showHideLeftMenuPushButton->setIcon(QIcon(":/icons/retract"));
        animation->setEndValue(314);
        animation->setEasingCurve(QEasingCurve::OutBack);
        _leftMenuHidden = false;
    }

    animation->start(QPropertyAnimation::DeleteWhenStopped);

}

/**
  * @brief  Load the map from the given file to the Scene
  * @param file, the path to the mapfile.
  */
void MainWindow::mapLoader(QString file)
{
    MapRenderer renderer(GestionnaireMap::getInstance((char *)file.toStdString().c_str())->getMap());

    _mapItem->setPixmap(renderer.createRendu()->pixmap().scaled(600,600));

}

/**
  * @brief Unload the map from the Scene.
  *Set an empty mapitem for the map
  */
void MainWindow::unloadMap()
{
    _mapItem->setPixmap(QPixmap());
}

/**
 *@brief Load the current version of the robot to the map.
 */
void MainWindow::loadRobot()
{
    _robotItem->setPixmap(QPixmap(":/robot/robot").scaled(60,60));
    _robotItem->translate(Robot::getInstance()->getPosition().first*SIZE_SQUARE,Robot::getInstance()->getPosition().second*SIZE_SQUARE);
    qDebug() << "robot pixmap set";
}

/**
 *@brief Unload the robot from the scene.
 *set an empty pixmap for the robot.
 */
void MainWindow::unloadRobot()
{
    _robotItem->setPixmap(QPixmap());
}

/**
 * @brief Move the graphical representation of the robot in position defined by x and y;
 * @param x
 * @param y
 */
void MainWindow::moveRobot(int x, int y)
{
    _robotItem->translate(x*SIZE_SQUARE,y*SIZE_SQUARE);
}


/**
  * @brief Show the About dialog.
  */
void MainWindow::on_actionAbout_triggered()
{
    AboutDialog dial;
    dial.exec();
}

