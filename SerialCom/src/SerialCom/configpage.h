#ifndef CONFIGPAGE_H
#define CONFIGPAGE_H

#include "Base.h"
#include "ui_configpage.h"
#include "DataPool.h"
#include <QSettings>
class ConfigPage : public StackPageBase {
    Q_OBJECT

public:
    ConfigPage(QWidget* parent = 0);
    ~ConfigPage();

    virtual void reshow(UserData data);

private slots:
    void st_bt_save();

private:
    void init_page();
    void bind_btn_state();
private:
    Ui::ConfigPage ui;
    int check();
    void save_data();
    void update_page();
    QSettings* configIni = nullptr;
    DataPool* data_pool_ = nullptr;
};

#endif // CONFIGPAGE_H
