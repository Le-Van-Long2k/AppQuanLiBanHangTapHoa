#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include "thongtinnhanvien.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Login login;
    login.show();
    return a.exec();
}
