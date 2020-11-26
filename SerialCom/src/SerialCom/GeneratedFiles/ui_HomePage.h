/********************************************************************************
** Form generated from reading UI file 'HomePage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *edit_raw_receive;
    QTextEdit *edit_receive;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_send;
    QPushButton *button_clear;
    QPushButton *button_receive;
    QPushButton *button_stop;
    QTextEdit *edit_send;
    QPushButton *button_open;
    QPushButton *button_close;

    void setupUi(QWidget *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QStringLiteral("HomePage"));
        HomePage->resize(1244, 733);
        groupBox = new QGroupBox(HomePage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 821, 541));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        edit_raw_receive = new QTextEdit(groupBox);
        edit_raw_receive->setObjectName(QStringLiteral("edit_raw_receive"));

        verticalLayout->addWidget(edit_raw_receive);

        edit_receive = new QTextEdit(groupBox);
        edit_receive->setObjectName(QStringLiteral("edit_receive"));

        verticalLayout->addWidget(edit_receive);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_send = new QPushButton(groupBox);
        button_send->setObjectName(QStringLiteral("button_send"));

        horizontalLayout->addWidget(button_send);

        button_clear = new QPushButton(groupBox);
        button_clear->setObjectName(QStringLiteral("button_clear"));

        horizontalLayout->addWidget(button_clear);

        button_receive = new QPushButton(groupBox);
        button_receive->setObjectName(QStringLiteral("button_receive"));

        horizontalLayout->addWidget(button_receive);

        button_stop = new QPushButton(groupBox);
        button_stop->setObjectName(QStringLiteral("button_stop"));

        horizontalLayout->addWidget(button_stop);


        verticalLayout->addLayout(horizontalLayout);

        edit_send = new QTextEdit(groupBox);
        edit_send->setObjectName(QStringLiteral("edit_send"));
        edit_send->setMaximumSize(QSize(16777215, 150));

        verticalLayout->addWidget(edit_send);

        button_open = new QPushButton(HomePage);
        button_open->setObjectName(QStringLiteral("button_open"));
        button_open->setGeometry(QRect(30, 570, 128, 23));
        button_close = new QPushButton(HomePage);
        button_close->setObjectName(QStringLiteral("button_close"));
        button_close->setGeometry(QRect(180, 570, 155, 23));

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("HomePage", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("HomePage", "\346\230\276\347\244\272", Q_NULLPTR));
        button_send->setText(QApplication::translate("HomePage", "\345\217\221\351\200\201", Q_NULLPTR));
        button_clear->setText(QApplication::translate("HomePage", "\346\270\205\347\251\272", Q_NULLPTR));
        button_receive->setText(QApplication::translate("HomePage", "\346\216\245\346\224\266", Q_NULLPTR));
        button_stop->setText(QApplication::translate("HomePage", "\345\201\234\346\255\242\346\216\245\346\224\266", Q_NULLPTR));
        button_open->setText(QApplication::translate("HomePage", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        button_close->setText(QApplication::translate("HomePage", "\345\205\263\351\227\255\344\270\262\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
