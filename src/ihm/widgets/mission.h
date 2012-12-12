#ifndef MISSION_H
#define MISSION_H

#include <QWidget>

namespace Ui {
class Mission;
}

class Mission : public QWidget
{
    Q_OBJECT
    
public:
    explicit Mission(QWidget *parent = 0);
    ~Mission();
    
private slots:
    void on_stopPushButton_clicked();

signals:
    void askStopMission();

private:
    Ui::Mission *ui;
};

#endif // MISSION_H
