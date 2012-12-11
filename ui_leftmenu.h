/********************************************************************************
** Form generated from reading UI file 'leftmenu.ui'
**
** Created: Tue Dec 11 18:21:14 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTMENU_H
#define UI_LEFTMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/mapmenu.h"
#include "widgets/robotmenu.h"

QT_BEGIN_NAMESPACE

class Ui_LeftMenu
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    MapMenu *mapMenuWidget;
    RobotMenu *robotInformationWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LeftMenu)
    {
        if (LeftMenu->objectName().isEmpty())
            LeftMenu->setObjectName(QString::fromUtf8("LeftMenu"));
        LeftMenu->resize(334, 300);
        LeftMenu->setMinimumSize(QSize(0, 0));
        LeftMenu->setMaximumSize(QSize(334, 300));
        horizontalLayout = new QHBoxLayout(LeftMenu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mapMenuWidget = new MapMenu(LeftMenu);
        mapMenuWidget->setObjectName(QString::fromUtf8("mapMenuWidget"));

        verticalLayout->addWidget(mapMenuWidget);

        robotInformationWidget = new RobotMenu(LeftMenu);
        robotInformationWidget->setObjectName(QString::fromUtf8("robotInformationWidget"));
        robotInformationWidget->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(robotInformationWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(LeftMenu);

        QMetaObject::connectSlotsByName(LeftMenu);
    } // setupUi

    void retranslateUi(QWidget *LeftMenu)
    {
        LeftMenu->setWindowTitle(QApplication::translate("LeftMenu", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LeftMenu: public Ui_LeftMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTMENU_H
