#pragma once
#include <QMutex>

#include "Base.h"
#include "ui_HomePage.h"
#include "const_def.h"
#include "Sensor.h"


class HomePage : public StackPageBase {
    Q_OBJECT
public:
    HomePage(QWidget* parent = 0);
    ~HomePage();
    virtual void reshow(UserData data);

    void paintEvent(QPaintEvent* event);
private:
    Ui::HomePage ui;
    void read_data();

signals:
    void write_msg(QByteArray);

private slots:
    void st_open();
    void st_send();
    void st_receive();
    void st_stop();
    void st_close();
    void st_clear();
    void st_update_output();
    void st_update_raw_output(QByteArray raw);
    void st_put_data();
private:
    QMutex  mutex_;
    QTimer* output_timer_ = nullptr;
    QTimer* put_data_timer_ = nullptr;

    bool first_base = true;
    QList<QPointF>    data_curve_;
    float base_value_ = 2000000.0f;
    Sensor* sensor_ = nullptr;
    QString all_content_ = "";
};

