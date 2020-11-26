/********************************************************************************
** Form generated from reading UI file 'maintitlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTITLEBAR_H
#define UI_MAINTITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainTitleBar
{
public:
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_min;
    QPushButton *btn_max;
    QPushButton *btn_close;

    void setupUi(QWidget *MainTitleBar)
    {
        if (MainTitleBar->objectName().isEmpty())
            MainTitleBar->setObjectName(QStringLiteral("MainTitleBar"));
        MainTitleBar->resize(1500, 100);
        MainTitleBar->setMaximumSize(QSize(16777215, 100));
        MainTitleBar->setFocusPolicy(Qt::NoFocus);
        MainTitleBar->setAutoFillBackground(false);
        MainTitleBar->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: rgb(67, 142, 185);\n"
"    selection-background-color:rgb(67, 142, 185);\n"
"    selection-color: black;\n"
"    background-clip: border;\n"
"    border-image: none;\n"
"    border: 0px transparent black;\n"
"    outline: 0;\n"
"	font-family:Microsoft YaHei;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: #D1DBCB;\n"
"    color: black;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: #D1DBCB;\n"
"    border: 0px\n"
"}\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: rgb(67, 142, 185);\n"
"    border-width: 0px;\n"
"    border-color: rgb(67, 142, 185);\n"
"    border-style: solid;\n"
"    padding: 5px;\n"
"    border-radius: 0px;\n"
"    outline: none;\n"
"	font-size:14px;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"    background-color: #535353;\n"
"    border-width: 1px;\n"
"    border-color: #454545;\n"
"    border-style: solid;\n"
"    padding-top: 5px;\n"
"    padding-bot"
                        "tom: 5px;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    border-radius: 2px;\n"
"    color: #454545;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    background-color: #D1DBCB;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color: black;\n"
"    background-color: #D1DBCB;\n"
"    padding-top: -15px;\n"
"    padding-bottom: -17px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    border: 1px solid #D1DBCB;\n"
"}\n"
"\n"
"QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #D1DBCB;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     color:white;\n"
"}\n"
""));
        horizontalLayout_3 = new QHBoxLayout(MainTitleBar);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(MainTitleBar);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(400, 0));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(166, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_min = new QPushButton(MainTitleBar);
        btn_min->setObjectName(QStringLiteral("btn_min"));
        btn_min->setFocusPolicy(Qt::NoFocus);
        btn_min->setStyleSheet(QLatin1String("\n"
"QPushButton\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: rgb(67, 142, 185);\n"
"    border-width: 0px;\n"
"    border-color: rgb(67, 142, 185);\n"
"    border-style: solid;\n"
"    padding: 5px;\n"
"    border-radius: 0px;\n"
"    outline: none;\n"
"	font-size:14px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:focus {\n"
"    background-color: #D1DBCB;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color: black;\n"
"    background-color: #D1DBCB;\n"
"    padding-top: -15px;\n"
"    padding-bottom: -17px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    border: 1px solid #D1DBCB;\n"
"background-color: rgba(127, 125, 127, 127);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/PortableDetector/Resources/images/title_bar/minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_min->setIcon(icon);

        horizontalLayout_2->addWidget(btn_min);

        btn_max = new QPushButton(MainTitleBar);
        btn_max->setObjectName(QStringLiteral("btn_max"));
        btn_max->setFocusPolicy(Qt::NoFocus);
        btn_max->setStyleSheet(QLatin1String("\n"
"QPushButton\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: rgb(67, 142, 185);\n"
"    border-width: 0px;\n"
"    border-color: rgb(67, 142, 185);\n"
"    border-style: solid;\n"
"    padding: 5px;\n"
"    border-radius: 0px;\n"
"    outline: none;\n"
"	font-size:14px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:focus {\n"
"    background-color: #D1DBCB;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color: black;\n"
"    background-color: #D1DBCB;\n"
"    padding-top: -15px;\n"
"    padding-bottom: -17px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    border: 1px solid #D1DBCB;\n"
"background-color: rgba(127, 125, 127, 127);\n"
"}\n"
""));
        btn_max->setIcon(icon);

        horizontalLayout_2->addWidget(btn_max);

        btn_close = new QPushButton(MainTitleBar);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setFocusPolicy(Qt::NoFocus);
        btn_close->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"    color: #eff0f1;\n"
"    background-color: rgb(67, 142, 185);\n"
"    border-width: 0px;\n"
"    border-color: rgb(67, 142, 185);\n"
"    border-style: solid;\n"
"    padding: 5px;\n"
"    border-radius: 0px;\n"
"    outline: none;\n"
"	font-size:14px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:focus {\n"
"    background-color: #D1DBCB;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color: black;\n"
"    background-color: #D1DBCB;\n"
"    padding-top: -15px;\n"
"    padding-bottom: -17px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    border: 1px solid #D1DBCB;\n"
"	background-color:rgb(232,17,35);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/PortableDetector/Resources/images/title_bar/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close->setIcon(icon1);

        horizontalLayout_2->addWidget(btn_close);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(MainTitleBar);

        QMetaObject::connectSlotsByName(MainTitleBar);
    } // setupUi

    void retranslateUi(QWidget *MainTitleBar)
    {
        MainTitleBar->setWindowTitle(QApplication::translate("MainTitleBar", "MainTitleBar", Q_NULLPTR));
        label->setText(QApplication::translate("MainTitleBar", "\346\240\207\351\242\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_min->setToolTip(QApplication::translate("MainTitleBar", "\346\234\200\345\260\217\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_max->setToolTip(QApplication::translate("MainTitleBar", "\346\234\200\345\260\217\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_max->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_close->setToolTip(QApplication::translate("MainTitleBar", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainTitleBar: public Ui_MainTitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTITLEBAR_H
