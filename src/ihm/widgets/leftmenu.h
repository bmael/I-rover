#ifndef LEFTMENU_H
#define LEFTMENU_H

#include <QWidget>

namespace Ui {
class LeftMenu;
}

class LeftMenu : public QWidget
{
    Q_OBJECT
    
public:
    explicit LeftMenu(QWidget *parent = 0);
    ~LeftMenu();
    
signals:
    void askMapLoad(QString file); // Transmit the signal to ask the loading of the map from Mapmenu Widget
    void askUnloadMap();           // Transmit the signal to ask the unloading of the map from Mapmenu Widget
    void askLoadRobot();           // Transmit the signal to ask the loading of the robot from Mapmenu Widget
    void askUnloadRobot();         // Transmit the signal to ask the unloading of the robot from RobotInformation Widget
    void askLoadMission(QString);  // Transmit the signal to ask the loading of the mission from Mapmenu widget.

private:
    Ui::LeftMenu *ui;

};

#endif // LEFTMENU_H
