#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("E:/APP/Database");

    if(mydb.open())
        ui->label->setText("Failed to open database");
    else
        ui->label->setText("Connected...");
}

Login::~Login()
{
    delete ui;
}

