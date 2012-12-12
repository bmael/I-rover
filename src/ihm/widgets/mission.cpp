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
 * Add the movement actuator given in paramater to the robot.
 * @brief Mission::loadMovementActuator
 * @param act
 */
void Mission::loadMovementActuator(MovementActuator *act)
{
//    Robot::getInstance()->
}

/**
 * Ask to stop the current mission
 * @brief Mission::on_stopPushButton_clicked
 */
void Mission::on_stopPushButton_clicked()
{
    emit askStopMission();
}

/**
 * Called when the user want to start the mission.
 * Adds the selected movement actuator to the robot.
 * @brief Mission::on_startPushButton_clicked
 */
void Mission::on_startPushButton_clicked()
{
    emit askStartMission();
}
