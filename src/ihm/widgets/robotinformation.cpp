#include "robotinformation.h"
#include "ui_robotinformation.h"


#include "rocketlauncher.h"
#include "robot.h"
#include "chains.h"
#include "wheels.h"

#include <QDebug>

RobotInformation::RobotInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotInformation)
{
    ui->setupUi(this);


    _actuatorModel = new QStandardItemModel();
    ui->actuatorsListView->setModel(_actuatorModel);

        qDebug() << QString::fromStdString(Robot::getInstance()->getName());

       RocketLauncher * rocketlauncher = new RocketLauncher();



       Robot::getInstance()->addActuator(rocketlauncher);


       for(unsigned int i = 0; i< Robot::getInstance()->getActuators()->size();i++){
           qDebug() << QString::fromStdString(Robot::getInstance()->getActuators()->front()->getName());
           QStandardItem *item = new QStandardItem(QString::fromStdString(Robot::getInstance()->getActuators()->front()->getName()));
           item->setEditable(false);
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

/**
 * Load the right movement actuator according to radiobox button.
 * @brief RobotInformation::loadMovementActuator
 * @param act
 */
void RobotInformation::loadMovementActuator()
{
    MovementActuator * act;
    if(ui->ChainsRadioButton->isChecked()){
        act = new Chains();
    }
    if(ui->wheelsRadioButton->isChecked()){
        act = new Wheels();
    }

    emit askLoadMovementActuator(act);
}
