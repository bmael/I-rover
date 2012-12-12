/********************************************************************************
** Form generated from reading UI file 'leftmenu.ui'
**
** Created: Wed Dec 12 12:51:49 2012
**      by: Qt User Interface Compiler version 4.8.3
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
        LeftMenu->resize(314, 54);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeftMenu->sizePolicy().hasHeightForWidth());
        LeftMenu->setSizePolicy(sizePolicy);
        LeftMenu->setMinimumSize(QSize(314, 0));
        LeftMenu->setMaximumSize(QSize(314, 16777215));
        horizontalLayout = new QHBoxLayout(LeftMenu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mapMenuWidget = new MapMenu(LeftMenu);
        mapMenuWidget->setObjectName(QString::fromUtf8("mapMenuWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mapMenuWidget->sizePolicy().hasHeightForWidth());
        mapMenuWidget->setSizePolicy(sizePolicy1);
        mapMenuWidget->setMinimumSize(QSize(314, 0));
        mapMenuWidget->setMaximumSize(QSize(314, 16777215));

        verticalLayout->addWidget(mapMenuWidget);

        robotInformationWidget = new RobotMenu(LeftMenu);
        robotInformationWidget->setObjectName(QString::fromUtf8("robotInformationWidget"));
        sizePolicy1.setHeightForWidth(robotInformationWidget->sizePolicy().hasHeightForWidth());
        robotInformationWidget->setSizePolicy(sizePolicy1);
        robotInformationWidget->setMinimumSize(QSize(314, 0));
        robotInformationWidget->setMaximumSize(QSize(314, 16777215));
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
