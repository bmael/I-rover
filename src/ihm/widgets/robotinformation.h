#ifndef ROBOTINFORMATION_H
#define ROBOTINFORMATION_H

#include <QWidget>

namespace Ui {
class RobotInformation;
}

class RobotInformation : public QWidget
{
    Q_OBJECT
    
public:
    explicit RobotInformation(QWidget *parent = 0);
    ~RobotInformation();
    
private:
    Ui::RobotInformation *ui;
};

#endif // ROBOTINFORMATION_H