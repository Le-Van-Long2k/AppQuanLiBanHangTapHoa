#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);
     mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/dell/Desktop/db/mydb.db");

    if(!mydb.open())
        ui->label->setText("Failed to open the database");
    else
        ui->label->setText("connected...");

}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEdit_UserName->text();
    password =ui->lineEdit_PassWord->text();

    if(!mydb.isOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    QSqlQuery qry;

    if(qry.exec("Select * from employeeinfo where username= '"+username+"' and password='"+password+"'"))
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1){
            ui->label->setText("username and password is correct");
        this->hide();
        EmployeeInfo employeinfo;
        employeinfo.setModal(true);
        employeinfo.exec();
        }
        if(count>1)
            ui->label->setText("Duplicate username and password");
        if(count<1)
            ui->label->setText("username and password is not correct");
    }


}
