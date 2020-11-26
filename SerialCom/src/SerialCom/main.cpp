#include "serialcom.h"
#include <QtWidgets/QApplication>
#include <qss_manager.h>
#include "logger.h"
#include <QDateTime>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    SerialCom w;
    {
        //»’÷æ
        SetLogName("log.txt");
        LogUseUtf8();
    }
    w.show();
    return a.exec();
}
