#include "m1.h"
#include "ui_m1.h"

M1::M1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::M1)
{
    ui->setupUi(this);
}

M1::~M1()
{
    delete ui;
}
