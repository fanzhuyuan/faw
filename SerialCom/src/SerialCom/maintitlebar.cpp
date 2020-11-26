#include "maintitlebar.h"
#include <QPainter>
#include <QMenu>
#include <QMessageBox>
#include "qss_manager.h"
#include <QSettings>


#pragma execution_character_set("utf-8")


MainTitleBar::MainTitleBar(QWidget* parent)
    : QWidget(parent) {
    ui.setupUi(this);

    ui.btn_min->setIcon(QIcon("./Resources/images/title/min.png"));
    ui.btn_max->setIcon(QIcon("./Resources/images/title/restore.png"));
    ui.btn_close->setIcon(QIcon("./Resources/images/title/close.png"));
    QSettings configIni("config.txt", QSettings::IniFormat);
    QString name = configIni.value("System/ver_name").toString();
    QString ver = configIni.value("System/version").toString();
    QString win = QString("%1 %2").arg(name).arg(ver);
    ui.label->setText(win);
    //ui.btn_max->setHidden(true);
    connect(ui.btn_min, SIGNAL(clicked()), this, SLOT(btn_click()));
    connect(ui.btn_close, SIGNAL(clicked()), this, SLOT(btn_click()));
    connect(ui.btn_max, SIGNAL(clicked()), this, SLOT(btn_click()));
}

MainTitleBar::~MainTitleBar() {

}

void MainTitleBar::paintEvent(QPaintEvent* event) {
    QPainter painter(this);
    painter.fillRect(this->rect(), QColor(67, 142, 185));
}

void MainTitleBar::btn_click() {
    QWidget* main_window = this->window();
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (main_window->isTopLevel()) {
        if (btn == ui.btn_min) {
            main_window->showMinimized();
        } else if (btn == ui.btn_close) {
            main_window->close();
        } else if (btn == ui.btn_max) {
            main_window->isMaximized() ? main_window->showNormal() : main_window->showMaximized();
        } else {
        }
    }
}


