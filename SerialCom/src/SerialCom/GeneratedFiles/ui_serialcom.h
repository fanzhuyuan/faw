/********************************************************************************
** Form generated from reading UI file 'serialcom.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALCOM_H
#define UI_SERIALCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "maintitlebar.h"

QT_BEGIN_NAMESPACE

class Ui_SerialComClass
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_option;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_diaplay;
    QPushButton *pushButton_config;
    QPushButton *pushButton_other;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QGroupBox *groupBox_man;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    MainTitleBar *title_bar;

    void setupUi(QWidget *SerialComClass)
    {
        if (SerialComClass->objectName().isEmpty())
            SerialComClass->setObjectName(QStringLiteral("SerialComClass"));
        SerialComClass->resize(1193, 849);
        gridLayout = new QGridLayout(SerialComClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_option = new QWidget(SerialComClass);
        widget_option->setObjectName(QStringLiteral("widget_option"));
        widget_option->setMaximumSize(QSize(180, 16777215));
        verticalLayout = new QVBoxLayout(widget_option);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_diaplay = new QPushButton(widget_option);
        pushButton_diaplay->setObjectName(QStringLiteral("pushButton_diaplay"));
        pushButton_diaplay->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(pushButton_diaplay);

        pushButton_config = new QPushButton(widget_option);
        pushButton_config->setObjectName(QStringLiteral("pushButton_config"));
        pushButton_config->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(pushButton_config);

        pushButton_other = new QPushButton(widget_option);
        pushButton_other->setObjectName(QStringLiteral("pushButton_other"));
        pushButton_other->setMinimumSize(QSize(100, 50));

        verticalLayout->addWidget(pushButton_other);

        verticalSpacer = new QSpacerItem(20, 584, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget_option);

        line = new QFrame(SerialComClass);
        line->setObjectName(QStringLiteral("line"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        line->setFont(font);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        groupBox_man = new QGroupBox(SerialComClass);
        groupBox_man->setObjectName(QStringLiteral("groupBox_man"));
        groupBox_man->setFlat(false);
        stackedWidget = new QStackedWidget(groupBox_man);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 0, 931, 741));
        stackedWidget->setLineWidth(3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 161, 61));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(groupBox_man);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        title_bar = new MainTitleBar(SerialComClass);
        title_bar->setObjectName(QStringLiteral("title_bar"));
        title_bar->setMinimumSize(QSize(0, 40));
        title_bar->setMaximumSize(QSize(16777215, 75));
        title_bar->setMouseTracking(true);
        title_bar->setAutoFillBackground(false);
        title_bar->setStyleSheet(QStringLiteral("background-color: rgb(67, 142, 185);"));

        gridLayout->addWidget(title_bar, 0, 0, 1, 1);


        retranslateUi(SerialComClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SerialComClass);
    } // setupUi

    void retranslateUi(QWidget *SerialComClass)
    {
        SerialComClass->setWindowTitle(QApplication::translate("SerialComClass", "SerialCom", Q_NULLPTR));
        pushButton_diaplay->setText(QApplication::translate("SerialComClass", "\346\230\276\347\244\272\346\225\260\346\215\256", Q_NULLPTR));
        pushButton_config->setText(QApplication::translate("SerialComClass", "\345\217\202\346\225\260\351\205\215\347\275\256", Q_NULLPTR));
        pushButton_other->setText(QApplication::translate("SerialComClass", "\345\205\266\344\273\226", Q_NULLPTR));
        groupBox_man->setTitle(QString());
        label->setText(QApplication::translate("SerialComClass", "test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SerialComClass: public Ui_SerialComClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALCOM_H
