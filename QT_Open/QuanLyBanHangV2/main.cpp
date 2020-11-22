#include "login.h"
#include "mainwindow.h"
#include <QApplication>
#include "m1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    M1 m;
    m.show();

    w.show();
    return a.exec();
}
