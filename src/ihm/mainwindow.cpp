#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPropertyAnimation>
#include <QDebug>
#include "widgets/aboutdialog.h"


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
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
  * Show or hide the left menu with an animation.
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
  * Load the map from the given file to the Scene
  *
  */
void MainWindow::mapLoader(QString file)
{
    _mapItem->setPixmap(QPixmap(file));
}

/**
  * Unload the map from the Scene.
  *Set an empty mapitem for the map
  */
void MainWindow::unloadMap()
{
    _mapItem->setPixmap(QPixmap());
}

/**
 *Load the curretn version of the robot to the map.
 * @brief MainWindow::loadRobot
 */
void MainWindow::loadRobot()
{
    _robotItem->setPixmap(QPixmap(":/robot/robot"));
    qDebug() << "robot pixmap set";
}

/**
 *Unload the robot from the scene.
 *set an empty pixmap for the robot.
 * @brief MainWindow::unloadRobot
 */
void MainWindow::unloadRobot()
{
    _robotItem->setPixmap(QPixmap());
}


/**
  * Show the About dialog.
  *
  */
void MainWindow::on_actionAbout_triggered()
{
    AboutDialog dial;
    dial.exec();
}

