/********************************************************************************
** Form generated from reading UI file 'robotinformation.ui'
**
** Created: Mon Dec 10 16:53:49 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTINFORMATION_H
#define UI_ROBOTINFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotInformation
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;

    void setupUi(QWidget *RobotInformation)
    {
        if (RobotInformation->objectName().isEmpty())
            RobotInformation->setObjectName(QString::fromUtf8("RobotInformation"));
        RobotInformation->resize(314, 72);
        RobotInformation->setMinimumSize(QSize(314, 72));
        RobotInformation->setMaximumSize(QSize(314, 72));
        RobotInformation->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(RobotInformation);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(RobotInformation);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RobotInformation);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(RobotInformation);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(RobotInformation);

        QMetaObject::connectSlotsByName(RobotInformation);
    } // setupUi

    void retranslateUi(QWidget *RobotInformation)
    {
        RobotInformation->setWindowTitle(QApplication::translate("RobotInformation", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RobotInformation", "Robot", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RobotInformation", "Mission", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RobotInformation", "Informations", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RobotInformation: public Ui_RobotInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTINFORMATION_H
