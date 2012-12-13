#include "mission.h"
#include "ui_mission.h"
#include "robot.h"

Mission::Mission(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mission)
{
    ui->setupUi(this);
}

Mission::~Mission()
{
    delete ui;
}

/**
 *
 * @brief Add the movement actuator given in paramater to the robot.
 * @param act
 */
void Mission::loadMovementActuator(MovementActuator *act)
{
//    Robot::getInstance()->
}

/**
 *
 * @brief Ask to stop the current mission
 */
void Mission::on_stopPushButton_clicked()
{
    emit askStopMission();
}

/** 
 * @brief Called when the user want to start the mission.
 * Adds the selected movement actuator to the robot.
 */
void Mission::on_startPushButton_clicked()
{
    emit askStartMission();
}
