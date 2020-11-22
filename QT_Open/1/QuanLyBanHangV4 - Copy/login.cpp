#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("Form Login");
    setModal(true);
    setAttribute(Qt::WA_DeleteOnClose);

   if(!connOpen())
       ui->label->setText("Failed to open the database");
   else
       ui->label->setText("connected...");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString username, password;
    username = ui->lineEdit_username->text();
    password =ui->lineEdit_password->text();

    if(!connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("Select * from employeeinfo where username= '"+username+"' and password='"+password+"'");

    //if(qry.exec("Select * from employeeinfo where username= '"+username+"' and password='"+password+"'"))
    if(qry.exec())
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1){
            ui->label->setText("username and password is correct");
            connClose();
            this->hide();
        }
        if(count>1)
            ui->label->setText("Duplicate username and password");
        if(count<1)
            ui->label->setText("username and password is not correct");
    }

}
