#include "dangnhap.h"
#include "ui_dangnhap.h"

DangNhap::DangNhap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DangNhap)
{
    ui->setupUi(this);
    setWindowTitle("Đăng nhập");
    setModal(true);
    setAttribute(Qt::WA_DeleteOnClose);

   if(!connOpen())
       ui->label_5->setText("Không kết nối được");
   else
       ui->label_5->setText("Đang kết nối");
}

DangNhap::~DangNhap()
{
    delete ui;
}

void DangNhap::on_pushButton_DangNhap_clicked()
{
    QString Username, Password;
    Username = ui->lineEdit_Username->text();
    Password =ui->lineEdit_Password->text();

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
            ui->label_TrangThai->setText("Tên người dùng và Mật khẩu chính xác");
            connClose();
            this->hide();
        }
        if(count>1)
            ui->label_TrangThai->setText("Tên người dùng và mật khẩu trùng lặp");
        if(count<1)
            ui->label_TrangThai->setText("Tên người dùng và Mật khẩu không đúng");
    }

}

void DangNhap::on_pushButton_Thoat_clicked()
{
   QApplication::quit();
}
