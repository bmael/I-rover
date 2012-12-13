#include "robotinformation.h"
#include "ui_robotinformation.h"


#include "rocketlauncher.h"
#include "robot.h"
#include "chains.h"
#include "wheels.h"
#include "arms.h"
#include "gps.h"

#include <QDebug>

RobotInformation::RobotInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotInformation)
{
    ui->setupUi(this);


    _actuatorModel = new QStandardItemModel();
    _sensorModel = new QStandardItemModel();

    ui->actuatorsListView->setModel(_actuatorModel);
    ui->sensorsListView->setModel(_sensorModel);

///////////////////////////////////////// DEBUG ///////////////////////////////////
       qDebug() << QString::fromStdString(Robot::getInstance()->getName());
       RocketLauncher * rocketlauncher = new RocketLauncher();
       Arms * arms = new Arms();


       Robot::getInstance()->addActuator(rocketlauncher);
       Robot::getInstance()->addActuator(arms);

       GpsSensor * gps = new GpsSensor();
       Robot::getInstance()->addSensor(gps);

//////////////////////////////////////////////////////////////////////////////////

       // Initialize the actuators list
       int cptRow = 0;
       for (std::list<Actuator*>::iterator it = Robot::getInstance()->getActuators()->begin(); it != Robot::getInstance()->getActuators()->end() ; ++it )
       {
           qDebug() << QString::fromStdString((*it)->getName());
           QStandardItem *item = new QStandardItem(QString::fromStdString((*it)->getName()));
           item->setEditable(false);
           _actuatorModel->setItem(cptRow,item);
           ui->actuatorsListView->update();
           cptRow ++;
       }

       //Initialize the sensors list
       cptRow = 0;
       for (std::list<Sensor*>::iterator it = Robot::getInstance()->getSensors()->begin(); it != Robot::getInstance()->getSensors()->end() ; ++it )
       {
           qDebug() << QString::fromStdString((*it)->getName());
           QStandardItem *item = new QStandardItem(QString::fromStdString((*it)->getName()));
           item->setEditable(false);
           _sensorModel->setItem(cptRow,item);
           ui->sensorsListView->update();
           cptRow ++;
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
    _actuatorModel->clear();
    ui->actuatorsListView->update();

    //set enabled radioButtons for the movement actuator
    ui->ChainsRadioButton->setEnabled(true);
    ui->wheelsRadioButton->setEnabled(true);

    //Clear the sensors list
    _sensorModel->clear();
    ui->sensorsListView->update();
}

/**
 * Load the right movement actuator according to radiobox button.
 * @brief RobotInformation::loadMovementActuator
 * @param act
 */
void RobotInformation::loadMovementActuator()
{
    MovementActuator * act = NULL;
    if(ui->wheelsRadioButton->isChecked()){
        act = new Wheels();
    }

    ui->ChainsRadioButton->setEnabled(false);
    ui->wheelsRadioButton->setEnabled(false);

    emit askLoadMovementActuator(act);

}
