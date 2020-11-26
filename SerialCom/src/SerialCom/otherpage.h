#ifndef OTHERPAGE_H
#define OTHERPAGE_H

#include <QWidget>
#include "Base.h"
#include "ui_otherpage.h"

class OtherPage : public StackPageBase {
    Q_OBJECT

public:
    OtherPage(QWidget* parent = 0);
    ~OtherPage();
    virtual void reshow(UserData data);
private:
    Ui::OtherPage ui;
};

#endif // OTHERPAGE_H
