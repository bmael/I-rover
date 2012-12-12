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
    void stopMission();
    void loadMovementActuator();

signals:
    void askLoadMovementActuator(MovementActuator * act);

private:
    Ui::RobotInformation *ui;
    QStandardItemModel * _actuatorModel;
    QStandardItemModel * _sensorModel;
};

#endif // ROBOTINFORMATION_H
