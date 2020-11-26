/********************************************************************************
** Form generated from reading UI file 'otherpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERPAGE_H
#define UI_OTHERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtherPage
{
public:
    QLabel *label;

    void setupUi(QWidget *OtherPage)
    {
        if (OtherPage->objectName().isEmpty())
            OtherPage->setObjectName(QStringLiteral("OtherPage"));
        OtherPage->resize(1199, 756);
        label = new QLabel(OtherPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 130, 391, 331));

        retranslateUi(OtherPage);

        QMetaObject::connectSlotsByName(OtherPage);
    } // setupUi

    void retranslateUi(QWidget *OtherPage)
    {
        OtherPage->setWindowTitle(QApplication::translate("OtherPage", "OtherPage", Q_NULLPTR));
        label->setText(QApplication::translate("OtherPage", "OUT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OtherPage: public Ui_OtherPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERPAGE_H
