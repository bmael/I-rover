/* ***************************************************
 * File robotinformation.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "robotinformation.h"
#include "ui_robotinformation.h"


#include "rocketlauncher.h"
#include "robot.h"
#include "chains.h"
#include "wheels.h"
#include "arms.h"
#include "gps.h"

#include <QDebug>

/**
 * @brief Constructs a new RobotInformation widget
 * @param parent
 */
RobotInformation::RobotInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RobotInformation)
{
    ui->setupUi(this);


    _actuatorModel = new QStandardItemModel();
    _sensorModel = new QStandardItemModel();

    ui->actuatorsListView->setModel(_actuatorModel);
    ui->sensorsListView->setModel(_sensorModel);

}

/**
 * @brief Destroys the RobotInformation widget
 */
RobotInformation::~RobotInformation()
{
    delete ui;
}

/**
 * @brief Called when the user want to stop the mission. Cleared the robotInformation.
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

    // ask to unload the map from the scene
    // TODO

    // ask to unload the robot from the scene
    // TODO
}

/**
 * @brief Load the right movement actuator according to radiobox button.
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

/**
 * @brief Load the current robot information after the loading asked by the user.
 */
void RobotInformation::loadRobotInformation()
{
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

    if(Robot::getInstance()->getMovementActuator()->getName() == "Chains"){
        ui->ChainsRadioButton->setChecked(true);
    }else{
        ui->wheelsRadioButton->setChecked(true);
    }

}
