
#ifndef MAINTITLEBAR_H
#define MAINTITLEBAR_H

#include <QWidget>
#include "ui_maintitlebar.h"
#include <QSystemTrayIcon>


class MainTitleBar : public QWidget {
    Q_OBJECT

public:
    MainTitleBar(QWidget* parent = 0);
    ~MainTitleBar();
    virtual void  paintEvent(QPaintEvent* event);


private:
    Ui::MainTitleBar ui;

private slots:
    void btn_click();

};

#endif // MAINTITLEBAR_H
