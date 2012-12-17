/* ***************************************************
 * File loadingwidget.h
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

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
