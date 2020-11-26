#pragma once
#include <QObjectUserData>
#include <QVariantMap>
#include <QWidget>

enum UserDataType {
    ShowHomePage = 0,
    ShowConfigPage,
    ShowOtherPage,
    Unknow = -1
};

class UserData : public QObjectUserData {
public:
    UserData() {
        type_ = Unknow;
    }
    UserData(const UserDataType& type, const QVariantMap& hash = QVariantMap()) {
        type_ = type;
        data_ = hash;
    }
    ~UserData() {
        data_.clear();
    }

    bool operator ==(const UserData& other) {
        auto id_equal = [&](QString id_key) {
            if (data_.contains(id_key))
                return data_[id_key].toInt() == other.data_[id_key].toInt();
            return false;
        };
        if (type_ != other.type_)
            return false;
        switch (type_) {
        case ShowHomePage:
        case ShowConfigPage:
            break;
        case Unknow:
            break;
        default:
            break;
        }
        return false;
    }
public:
    UserDataType    type_;
    QVariantMap data_;
};
Q_DECLARE_METATYPE(UserData)
inline QDataStream& operator<<(QDataStream& out, const UserData& data) {
    out <<  data.data_;
    return out;
}

inline QDataStream& operator >> (QDataStream& out, UserData& data) {
    out  >> data.data_;
    return out;
}


class StackPageBase : public QWidget {
public:
    StackPageBase(QWidget* parent)
        : QWidget(parent) {

    }
    ~StackPageBase() {}
    virtual void reshow(UserData data) {
    }
};


