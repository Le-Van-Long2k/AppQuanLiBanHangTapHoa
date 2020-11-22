#include "sanpham.h"
#include "ui_sanpham.h"
#include <QMessageBox>
#include "login.h"

SanPham::SanPham(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SanPham)
{
    ui->setupUi(this);
    Login conn;
    if(!conn.connOpen())
        ui->label_SanPham->setText("Failed to open the database");
    else
        ui->label_SanPham->setText("connected...");
    ui->setupUi(this);
}

SanPham::~SanPham()
{
    delete ui;
}

void SanPham::on_pushButton_Them_clicked()
{
    Login conn;
    QString ID_SanPham, TenSanPham, LoaiSanPham, GiaNhap, GiaBan, ViTri, SoLuong;
    ID_SanPham = ui->lineEdit_ID_SanPham->text();
    TenSanPham = ui->lineEdit_TenSanPham ->text();
    LoaiSanPham = ui->lineEdit_LoaiSanPham ->text();
    GiaNhap = ui->lineEdit_GiaNhap ->text();
    GiaBan = ui->lineEdit_GiaBan ->text();
    SoLuong = ui->lineEdit_SoLuong ->text();


    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;

   qry.prepare( "INSERT INTO SanPham (ID_SanPham, TenSanPham, LoaiSanPham, GiaNhap, GiaBan, SoLuong) VALUES (:ID_SanPham, :TenSanPham, :LoaiSanPham, :GiaNhap, :GiaBan, :SoLuong)" );
    qry.bindValue(":ID_SanPham", ID_SanPham);
   qry.bindValue(":TenSanPham", TenSanPham);
    qry.bindValue(":LoaiSanPham", LoaiSanPham);
   qry.bindValue(":GiaNhap", GiaNhap);
   qry.bindValue(":GiaBan", GiaBan);
   qry.bindValue(":SoLuong", SoLuong);


    if(qry.exec( ))
    {
      QMessageBox::critical(this,tr("Thêm"),tr("Đã Thêm"));
      conn.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Lỗi"), qry.lastError().text());
    }
}

void SanPham::on_pushButton_Xem_clicked()
{
    Login conn;
    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select * from SanPham");

    qry->exec();
    modal->setQuery(*qry);

    ui ->tableView_SanPham->setModel(modal);
    ui->tableView_SanPham->show();

    conn.connClose();
    qDebug() << (modal->rowCount());
}
