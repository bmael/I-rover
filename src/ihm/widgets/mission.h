#ifndef MISSION_H
#define MISSION_H

#include <QWidget>
#include "movementactuator.h"

namespace Ui {
class Mission;
}

class Mission : public QWidget
{
    Q_OBJECT
    
public:
    explicit Mission(QWidget *parent = 0);
    ~Mission();

public slots:
    void loadMovementActuator(MovementActuator * act); // Create a new Movement actuator for the current robot according to the user choice.
    void loadMissionDescription(QString description);  // Load mission description

private slots:
    void on_stopPushButton_clicked();  // The user wants to stop the mission
    void on_startPushButton_clicked(); // The user wants to start the mission

signals:
    void askStopMission();              // Emit when the user want to stop the mission
    void askStartMission();             // Emit when the user want to start the mission

private:
    Ui::Mission *ui;
};

#endif // MISSION_H
