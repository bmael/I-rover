#ifndef ROBOTINFORMATION_H
#define ROBOTINFORMATION_H

#include <QWidget>
#include <QStandardItemModel>

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
    QStandardItemModel * _actuatorModel;
};

#endif // ROBOTINFORMATION_H
