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

    void on_missionPushButton_clicked(); // Show or hide the mission widget

signals:

private:
    Ui::RobotMenu *ui;
    bool _missionHidden;
};

#endif // ROBOTMENU_H
