#ifndef ROBOTMENU_H
#define ROBOTMENU_H

#include <QWidget>

namespace Ui {
class RobotMenu;
}

class RobotMenu : public QWidget
{
    Q_OBJECT
    
public:
    explicit RobotMenu(QWidget *parent = 0);
    ~RobotMenu();

protected:
    void paintEvent(QPaintEvent *); //Override of paintEvent.
    
private slots:

    void on_missionPushButton_clicked();        // Show or hide the mission widget
    void on_informationPushButton_clicked();    // Show or hide the Robot information widget


signals:
    void askUnloadMap();    // Emit when the mission is stopping.
    void askLoadRobot();    // Transmit the signal to ask the robot information loading from the MapMenu.
    void askUnloadRobot();  // Emit when the mission is stoping.
    void askLoadMission(QString); // Transmit the signal to ask the mission loading from LeftMenu widget.

private:
    Ui::RobotMenu *ui;
    bool _missionHidden;
    bool _informationHidden;
};

#endif // ROBOTMENU_H
