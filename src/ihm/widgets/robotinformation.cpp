#include "robotinformation.h"
#include "ui_robotinformation.h"


#include "rocketlauncher.h"
#include "robot.h"

#include <QDebug>

RobotInformation::RobotInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotInformation)
{
    ui->setupUi(this);



        Robot robot1("\nWall-E\n");
        qDebug() << QString::fromStdString(robot1.getName());

       RocketLauncher * rocketlauncher = new RocketLauncher();

       robot1.addActuator(rocketlauncher);
}

RobotInformation::~RobotInformation()
{
    delete ui;
}
