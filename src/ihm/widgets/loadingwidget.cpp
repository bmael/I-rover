/* ***************************************************
 * File loadingwidget.cpp
 * Project I-Rover
 * Florian FAGNIEZ - Mael BARBIN - JULIEN Bizeul -
 * Thibaut ROBERGE - Noémie RULLIER - Brian GOHIER -
 * Guillaume COUTABLE
 * M1 ALMA - Université de Nantes
 * 2012-2013
 * ***************************************************/

#include "loadingwidget.h"
#include "ui_loadingwidget.h"

LoadingWidget::LoadingWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadingWidget)
{
    ui->setupUi(this);
}

LoadingWidget::~LoadingWidget()
{
    delete ui;
}

/**
 * @brief Updates the percent and the status.
 * @param percent of the progressBar
 * @param status of the label
 */
void LoadingWidget::update(int percent, QString status)
{
    ui->progressBar->setValue(percent);
    ui->statusLabel->setText(status);
}
