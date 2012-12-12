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


    _actuatorModel = new QStandardItemModel();
    ui->actuatorsListView->setModel(_actuatorModel);

        Robot robot1("Wall-E");
        qDebug() << QString::fromStdString(robot1.getName());

       RocketLauncher * rocketlauncher = new RocketLauncher();

       robot1.addActuator(rocketlauncher);


       for(unsigned int i = 0; i< robot1.getActuators()->size();i++){
           qDebug() << QString::fromStdString(robot1.getActuators()->front()->getName());
           QStandardItem *item = new QStandardItem(QString::fromStdString(robot1.getActuators()->front()->getName()));
           _actuatorModel->setItem(i,item);
           ui->actuatorsListView->update();
       }
}

RobotInformation::~RobotInformation()
{
    delete ui;
}

/**
 * Called when the user want to stop the mission. Cleared the robotInformation.
 * @brief RobotInformation::stopMission
 */
void RobotInformation::stopMission()
{

    //Clear the actuators list
//    _actuatorModel->removeRows(0,_actuatorModel->rowCount());
    _actuatorModel->clear();
    ui->actuatorsListView->update();
}
