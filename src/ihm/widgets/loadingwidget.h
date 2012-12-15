#ifndef LOADINGWIDGET_H
#define LOADINGWIDGET_H

#include <QDialog>

namespace Ui {
class LoadingWidget;
}

class LoadingWidget : public QDialog
{
    Q_OBJECT
    
public:
    explicit LoadingWidget(QWidget *parent = 0);
    ~LoadingWidget();

public slots:
    void update(int percent,QString status); //Sets the status and the percent
    
private:
    Ui::LoadingWidget *ui;
};

#endif // LOADINGWIDGET_H
