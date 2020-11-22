#include "mainwindow.h"
#include "dangnhap.h"
#include <QApplication>
#include "nguoidung.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    DangNhap DangNhap;
    DangNhap.show();
    return a.exec();
}
