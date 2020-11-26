#pragma once
#include <QFile>
#include<QApplication>
#include <QWidget>

class QSSManager {
public:
    static void setStyle(const QString& style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }

    static void setStyle(QWidget* w, QString file_path) {
        QFile qss(file_path);
        qss.open(QFile::ReadOnly);
        w->setStyleSheet(qss.readAll());
        qss.close();
    }
};
