#include "leftmenu.h"
#include "ui_leftmenu.h"

#include <QDebug>
#include <QPropertyAnimation>
LeftMenu::LeftMenu(QWidget *parent, bool hide) :
    QWidget(parent),
    ui(new Ui::LeftMenu)
{
    ui->setupUi(this);

    // Connection for loading/unloading the map
    connect(ui->mapMenuWidget,SIGNAL(askLoadMap(QString)), this, SIGNAL(askMapLoad(QString)));
    connect(ui->mapMenuWidget, SIGNAL(askUnloadMap()), this, SIGNAL(askUnloadMap()));

    // Connection for loading/unloading the robot
    connect(ui->mapMenuWidget,SIGNAL(askLoadRobot()), this, SIGNAL(askLoadRobot()));
    connect(ui->mapMenuWidget,SIGNAL(askLoadRobot()), ui->robotInformationWidget, SLOT(loadRobotInformation()));
    connect(ui->robotInformationWidget,SIGNAL(askUnloadRobot()), this, SIGNAL(askUnloadRobot()));
}

LeftMenu::~LeftMenu()
{
    delete ui;
}




