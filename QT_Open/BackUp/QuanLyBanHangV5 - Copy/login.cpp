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
    QString Username, Password;
    Username = ui->lineEdit_username->text();
    Password =ui->lineEdit_password->text();

    if(!connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    connOpen();
    QSqlQuery qry;
   // qry.prepare("Select * from NguoiDung where Username= '"+Username+"' and Password='"+Password+"'");

    //if(qry.exec("Select * from NguoiDung where Username= '"+Username+"' and Password='"+Password+"'"))
    if(qry.exec("Select * from NguoiDung where Username= '"+Username+"' and Password='"+Password+"'"))
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1){
            ui->label->setText("Username and Password is correct");
            connClose();
            this->hide();
        }
        if(count>1)
            ui->label->setText("Duplicate Username and Password");
        if(count<1)
            ui->label->setText("Username and Password is not correct");
    }

}
