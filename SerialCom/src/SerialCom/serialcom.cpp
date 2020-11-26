#include "serialcom.h"
#include <QToolButton>
#include <QToolBar>
#include <QMenu>
#include <iostream>
#include <QVariant>
#include <QVariantMap>

#include "configpage.h"
#include "otherpage.h"
#include "Base.h"


SerialCom::SerialCom(QWidget* parent)
    : QWidget(parent) {
    ui.setupUi(this);
    setWindowIcon(QIcon("./Resources/images/window.png"));
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());

    qRegisterMetaTypeStreamOperators<UserData>("UserData");

    init_ui();
    update_ui_data();
    init_connect();
}

SerialCom::~SerialCom() {

}

void SerialCom::init_ui() {
    ui.stackedWidget->removeWidget(ui.page);
    ui.stackedWidget->removeWidget(ui.page_2);

    ui.stackedWidget->insertWidget(ShowHomePage, new HomePage(this));
    ui.stackedWidget->insertWidget(ShowConfigPage, new ConfigPage(this));
    ui.stackedWidget->insertWidget(ShowOtherPage, new OtherPage(this));

    switch_page(ShowHomePage);
}

void SerialCom::init_connect() {
    connect(ui.pushButton_diaplay, SIGNAL(clicked()), this, SLOT(st_switch_page()));
    connect(ui.pushButton_config, SIGNAL(clicked()), this, SLOT(st_switch_page()));
    connect(ui.pushButton_other, SIGNAL(clicked()), this, SLOT(st_switch_page()));
}

void SerialCom::update_ui_data() {
    //导航按钮初始化 绑定自身对应界面数据
    auto update_button = [](QPushButton * button, UserDataType type, QString name, QString data) {
        button->setText(name);

        QVariantMap temp;
        temp["NAME"] = name;
        temp["ENG"] = data;
        UserData* user_data = new UserData(type, temp);
        button->setUserData(Qt::UserRole, user_data);
    };
    update_button(ui.pushButton_diaplay, ShowHomePage, "主界面", "main interface");
    update_button(ui.pushButton_config, ShowConfigPage, "配置页面", "Configuration page");
    update_button(ui.pushButton_other, ShowOtherPage, "其他", "fawfawfaw");
}

void SerialCom::st_switch_page() {
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    UserData* data = dynamic_cast<UserData*>(btn->userData(Qt::UserRole));  //向下转型
    if (btn == ui.pushButton_diaplay) {
        switch_page(*data);
    } else if (btn == ui.pushButton_config) {
        switch_page(*data);
    } else if (btn == ui.pushButton_other) {
        switch_page(*data);
    } else {
    }
}

void SerialCom::switch_page(const UserData& data) {
    ui.stackedWidget->setCurrentIndex(data.type_);
    current_widget = dynamic_cast<StackPageBase*>(ui.stackedWidget->widget(data.type_));
    if (current_widget) {
        current_widget->reshow(data);
        std::cout << "switch page:" << data.type_ << std::endl;
    }
}

void SerialCom::mousePressEvent(QMouseEvent* event) {
    lastPos = event->globalPos();
    isPressedWidget = true; // 当前鼠标按下的即是QWidget而非界面上布局的其它控件
}

void SerialCom::mouseMoveEvent(QMouseEvent* event) {
    if (isPressedWidget) {
        this->move(this->x() + (event->globalX() - lastPos.x()),
                   this->y() + (event->globalY() - lastPos.y()));
        lastPos = event->globalPos();
    }
}

void SerialCom::mouseReleaseEvent(QMouseEvent* event) {
    // 其实这里的mouseReleaseEvent函数可以不用重写
    lastPos = event->globalPos();
    isPressedWidget = false; // 鼠标松开时，置为false
}

