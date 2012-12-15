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
