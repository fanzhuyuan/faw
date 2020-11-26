#ifndef SERIALCOM_H
#define SERIALCOM_H

#include <QtWidgets/QWidget>
#include "ui_serialcom.h"
#include <QMouseEvent>
#include "Homepage.h"

class SerialCom : public QWidget {
    Q_OBJECT

public:
    SerialCom(QWidget* parent = 0);
    ~SerialCom();

protected:
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseMoveEvent(QMouseEvent* event);
    virtual void mouseReleaseEvent(QMouseEvent* event);

private slots:
    void st_switch_page();

private:
    void init_ui();
    void update_ui_data();
    void init_connect();
    void switch_home();
    void switch_config();
    void switch_other();
    void switch_page(const UserData& data);

private:
    Ui::SerialComClass ui;
    QPoint lastPos;
    bool isPressedWidget;
    StackPageBase* current_widget = nullptr;
};

#endif // SERIALCOM_H
