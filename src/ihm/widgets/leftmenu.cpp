#include "leftmenu.h"
#include "ui_leftmenu.h"

#include <QDebug>
#include <QPropertyAnimation>

/**
 * @brief Constructs a new LeftMenu widget. This widget is visible according to the
 * value of the parameter hide.
 * @param parent
 * @param hide false by default
 */
LeftMenu::LeftMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftMenu)
{
    ui->setupUi(this);

    // Connection for loading/unloading the map
    connect(ui->mapMenuWidget,SIGNAL(askLoadMap(QString)), this, SIGNAL(askMapLoad(QString)));
    connect(ui->mapMenuWidget, SIGNAL(askUnloadMap()), this, SIGNAL(askUnloadMap()));

    // Connection for loading/unloading the robot
    connect(ui->mapMenuWidget,SIGNAL(askLoadRobot()), this, SIGNAL(askLoadRobot()));
    connect(ui->mapMenuWidget,SIGNAL(askLoadRobot()), ui->robotInformationWidget, SIGNAL(askLoadRobot()));
    connect(ui->robotInformationWidget,SIGNAL(askUnloadRobot()), this, SIGNAL(askUnloadRobot()));
    connect(ui->robotInformationWidget,SIGNAL(askUnloadMap()), this, SIGNAL(askUnloadMap()));

    // Connect to allow the loading after a click on stop mission
    connect(ui->robotInformationWidget, SIGNAL(askUnloadMap()), ui->mapMenuWidget, SLOT(allowReloadButton()));

    // Connection to load/unloading the mission
    connect(ui->mapMenuWidget,SIGNAL(askLoadMission(QString)), ui->robotInformationWidget, SIGNAL(askLoadMission(QString)));

}

/**
 * @brief Destroys the LeftMenu
 */
LeftMenu::~LeftMenu()
{
    delete ui;
}




