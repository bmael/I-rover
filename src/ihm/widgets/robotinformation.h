#ifndef ROBOTINFORMATION_H
#define ROBOTINFORMATION_H

#include <QWidget>
#include <QStandardItemModel>
#include "movementactuator.h"

namespace Ui {
class RobotInformation;
}

class RobotInformation : public QWidget
{
    Q_OBJECT
    
public:
    explicit RobotInformation(QWidget *parent = 0);
    ~RobotInformation();
    
public slots:
    void stopMission();             // Clear actuator and sensor view, ask to unload map and robot from the scene
    void loadMovementActuator();    // Initialize the robot movement actuator according to the user choice.
    void loadRobotInformation();    // Load the robot information.

signals:
    void askLoadMovementActuator(MovementActuator * act); // Emit when the user choice has been done.
    void askUnloadMap();                                  // Emit when we are stoping the mission.
    void askUnloadRobot();                                // Emit when we are stoping the mission.

private:
    Ui::RobotInformation *ui;
    QStandardItemModel * _actuatorModel;
    QStandardItemModel * _sensorModel;
};

#endif // ROBOTINFORMATION_H
