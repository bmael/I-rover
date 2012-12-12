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
    void loadMovementActuator(MovementActuator * act);
    
private slots:
    void on_stopPushButton_clicked();  // The user wants to stop the mission
    void on_startPushButton_clicked(); // The user wants to start the mission

signals:
    void askStopMission();
    void askStartMission();

private:
    Ui::Mission *ui;
};

#endif // MISSION_H
