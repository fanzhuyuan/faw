/********************************************************************************
** Form generated from reading UI file 'configpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGPAGE_H
#define UI_CONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigPage
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label;
    QComboBox *combo_baud;
    QComboBox *combo_check_bit;
    QComboBox *combo_data_bit;
    QLabel *label_11;
    QComboBox *combo_stop_bit;
    QLabel *label_5;
    QComboBox *combo_port;
    QPushButton *bt_save;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_file;
    QRadioButton *radio_nfile;
    QWidget *tab_3;

    void setupUi(QWidget *ConfigPage)
    {
        if (ConfigPage->objectName().isEmpty())
            ConfigPage->setObjectName(QStringLiteral("ConfigPage"));
        ConfigPage->resize(1257, 875);
        tabWidget = new QTabWidget(ConfigPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 761, 631));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(800, 300));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        combo_baud = new QComboBox(groupBox);
        combo_baud->setObjectName(QStringLiteral("combo_baud"));
        combo_baud->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(combo_baud, 0, 3, 1, 1);

        combo_check_bit = new QComboBox(groupBox);
        combo_check_bit->setObjectName(QStringLiteral("combo_check_bit"));
        combo_check_bit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(combo_check_bit, 1, 3, 1, 1);

        combo_data_bit = new QComboBox(groupBox);
        combo_data_bit->setObjectName(QStringLiteral("combo_data_bit"));
        combo_data_bit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(combo_data_bit, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 4, 1, 1);

        combo_stop_bit = new QComboBox(groupBox);
        combo_stop_bit->setObjectName(QStringLiteral("combo_stop_bit"));
        combo_stop_bit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(combo_stop_bit, 0, 5, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        combo_port = new QComboBox(groupBox);
        combo_port->setObjectName(QStringLiteral("combo_port"));
        combo_port->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(combo_port, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        bt_save = new QPushButton(tab);
        bt_save->setObjectName(QStringLiteral("bt_save"));
        bt_save->setMaximumSize(QSize(150, 50));
        bt_save->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(bt_save, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(90, 90, 221, 121));
        groupBox_2->setAlignment(Qt::AlignCenter);
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radio_file = new QRadioButton(groupBox_2);
        radio_file->setObjectName(QStringLiteral("radio_file"));

        horizontalLayout->addWidget(radio_file);

        radio_nfile = new QRadioButton(groupBox_2);
        radio_nfile->setObjectName(QStringLiteral("radio_nfile"));
        radio_nfile->setEnabled(true);

        horizontalLayout->addWidget(radio_nfile);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(ConfigPage);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ConfigPage);
    } // setupUi

    void retranslateUi(QWidget *ConfigPage)
    {
        ConfigPage->setWindowTitle(QApplication::translate("ConfigPage", "ConfigPage", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("ConfigPage", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConfigPage", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label_6->setText(QApplication::translate("ConfigPage", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        label->setText(QApplication::translate("ConfigPage", "\344\270\262\345\217\243\351\200\211\346\213\251", Q_NULLPTR));
        label_11->setText(QApplication::translate("ConfigPage", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("ConfigPage", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        bt_save->setText(QApplication::translate("ConfigPage", "\344\277\235\345\255\230", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ConfigPage", "\351\200\232\350\256\257\345\217\202\346\225\260\351\205\215\347\275\256", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ConfigPage", "\346\230\257\345\220\246\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        radio_file->setText(QApplication::translate("ConfigPage", "\346\230\257", Q_NULLPTR));
        radio_nfile->setText(QApplication::translate("ConfigPage", "\345\220\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ConfigPage", "\347\263\273\347\273\237\345\217\202\346\225\260\351\205\215\347\275\256", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ConfigPage", "\345\205\266\344\273\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigPage: public Ui_ConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGPAGE_H
