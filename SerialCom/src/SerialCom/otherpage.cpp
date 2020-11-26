#include "otherpage.h"
#include <assert.h>

OtherPage::OtherPage(QWidget* parent)
    : StackPageBase(parent) {
    ui.setupUi(this);
}

OtherPage::~OtherPage() {

}

void OtherPage::reshow(UserData data) {
    QVariantMap temp = data.data_;
    assert(temp.size() != 0);
    QString name = temp["ENG"].toString();

    ui.label->setText(name);

}
