/********************************************************************************
** Form generated from reading UI file 'robotmenu.ui'
**
** Created: Tue Dec 11 13:15:41 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTMENU_H
#define UI_ROBOTMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/mission.h"

QT_BEGIN_NAMESPACE

class Ui_RobotMenu
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *missionPushButton;
    QHBoxLayout *horizontalLayout_5;
    Mission *MissionInformation;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *informationPushButton;

    void setupUi(QWidget *RobotMenu)
    {
        if (RobotMenu->objectName().isEmpty())
            RobotMenu->setObjectName(QString::fromUtf8("RobotMenu"));
        RobotMenu->resize(314, 95);
        RobotMenu->setMinimumSize(QSize(314, 0));
        RobotMenu->setMaximumSize(QSize(314, 16777215));
        RobotMenu->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(RobotMenu);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(RobotMenu);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 35));
        label->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        missionPushButton = new QPushButton(RobotMenu);
        missionPushButton->setObjectName(QString::fromUtf8("missionPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/deployBottom"), QSize(), QIcon::Normal, QIcon::Off);
        missionPushButton->setIcon(icon);

        horizontalLayout_2->addWidget(missionPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        MissionInformation = new Mission(RobotMenu);
        MissionInformation->setObjectName(QString::fromUtf8("MissionInformation"));
        MissionInformation->setMinimumSize(QSize(314, 0));
        MissionInformation->setMaximumSize(QSize(314, 0));

        horizontalLayout_5->addWidget(MissionInformation);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        informationPushButton = new QPushButton(RobotMenu);
        informationPushButton->setObjectName(QString::fromUtf8("informationPushButton"));
        informationPushButton->setIcon(icon);

        horizontalLayout_3->addWidget(informationPushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(RobotMenu);

        QMetaObject::connectSlotsByName(RobotMenu);
    } // setupUi

    void retranslateUi(QWidget *RobotMenu)
    {
        RobotMenu->setWindowTitle(QApplication::translate("RobotMenu", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RobotMenu", "Robot", 0, QApplication::UnicodeUTF8));
        missionPushButton->setText(QApplication::translate("RobotMenu", "Mission", 0, QApplication::UnicodeUTF8));
        informationPushButton->setText(QApplication::translate("RobotMenu", "Information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RobotMenu: public Ui_RobotMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTMENU_H
