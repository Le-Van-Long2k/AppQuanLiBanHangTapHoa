#include "sanpham.h"
#include "ui_sanpham.h"
#include <QMessageBox>
#include "dangnhap.h"

SanPham::SanPham(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SanPham)
{
    ui->setupUi(this);
    DangNhap conn;
}

SanPham::~SanPham()
{
    delete ui;
}

void SanPham::on_pushButton_Them_clicked()
{
    DangNhap conn;
    QString ID_SanPham, TenSanPham, LoaiSanPham, GiaBan, GiaNhap, ViTri, SoLuong;
    ID_SanPham = ui->lineEdit_ID_SanPham->text();
    TenSanPham = ui->lineEdit_TenSanPham->text();
    LoaiSanPham = ui->lineEdit_LoaiSanPham->text();
    GiaBan = ui->lineEdit_GiaBan->text();
    GiaNhap = ui->lineEdit_GiaNhap->text();
    ViTri = ui->lineEdit_ViTri->text();
    SoLuong =ui->lineEdit_SoLuong->text();

    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;

   qry.prepare( "INSERT INTO SanPham (ID_SanPham, TenSanPham, LoaiSanPham, GiaBan, GiaNhap, ViTri, SoLuong) VALUES (:ID_SanPham, :TenSanPham, :LoaiSanPham, :GiaBan, :GiaNhap, :ViTri, :SoLuong)" );
   qry.bindValue(":ID_SanPham", ID_SanPham);
   qry.bindValue(":TenSanPham", TenSanPham);
   qry.bindValue(":LoaiSanPham", LoaiSanPham);
   qry.bindValue(":GiaBan", GiaBan);
   qry.bindValue(":GiaNhap", GiaNhap);
   qry.bindValue(":ViTri", ViTri);
   qry.bindValue(":SoLuong", SoLuong);

    if(qry.exec( ))
    {
      QMessageBox::critical(this,tr("Thêm"),tr("Đã Thêm"));
      conn.connClose();
      QSqlQueryModel *modal = new QSqlQueryModel();

      conn.connOpen();
      QSqlQuery* qry = new QSqlQuery(conn.mydb);

      qry->prepare("select * from SanPham");

      qry->exec();
      modal->setQuery(*qry);

      ui ->tableView->setModel(modal);
      ui->tableView->show();

      conn.connClose();
      qDebug() << (modal->rowCount());
    }
    else
    {
        QMessageBox::critical(this,tr("Lỗi"), qry.lastError().text());
    }


}

void SanPham::on_pushButton_Xoa_clicked()
{
    DangNhap conn;
    QString ID_SanPham, TenSanPham;
    ID_SanPham = ui->lineEdit_ID_SanPham->text();
    TenSanPham = ui->lineEdit_TenSanPham->text();


    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("Delete from SanPham where ID_SanPham='"+ID_SanPham+"'");
    if(qry.exec( ))
    {
      QMessageBox::critical(this,tr("Xóa"),tr("Đã Xóa"));
      conn.connClose();
      QSqlQueryModel *modal = new QSqlQueryModel();

      conn.connOpen();
      QSqlQuery* qry = new QSqlQuery(conn.mydb);

      qry->prepare("select * from SanPham");

      qry->exec();
      modal->setQuery(*qry);

      ui ->tableView->setModel(modal);
      ui->tableView->show();

      conn.connClose();
      qDebug() << (modal->rowCount());
    }
    else
    {
        QMessageBox::critical(this,tr("Lỗi"), qry.lastError().text());
    }


}

void SanPham::on_pushButton_2_clicked()
{
    DangNhap conn;
    QString ID_SanPham, TenSanPham, LoaiSanPham, GiaBan, GiaNhap, ViTri, SoLuong;
    ID_SanPham = ui->lineEdit_ID_SanPham->text();
    TenSanPham = ui->lineEdit_TenSanPham->text();
    LoaiSanPham = ui->lineEdit_LoaiSanPham->text();
    GiaBan = ui->lineEdit_GiaBan->text();
    GiaNhap = ui->lineEdit_GiaNhap->text();
    ViTri = ui->lineEdit_ViTri->text();
    SoLuong =ui->lineEdit_SoLuong->text();

    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("update SanPham set ID_SanPham='"+ID_SanPham+"', TenSanPham='"+TenSanPham+"', LoaiSanPham='"+LoaiSanPham+"', GiaBan='"+GiaBan+"', GiaNhap='"+GiaNhap+"', ViTri='"+ViTri+"', SoLuong='"+SoLuong+"' where ID_SanPham='"+ID_SanPham+"'");
    if(qry.exec( ))
    {
      QMessageBox::critical(this,tr("Sửa"),tr("Đã Sửa"));
      conn.connClose();
      QSqlQueryModel *modal = new QSqlQueryModel();

      conn.connOpen();
      QSqlQuery* qry = new QSqlQuery(conn.mydb);

      qry->prepare("select * from SanPham");

      qry->exec();
      modal->setQuery(*qry);

      ui ->tableView->setModel(modal);
      ui->tableView->show();

      conn.connClose();
      qDebug() << (modal->rowCount());
    }
    else
    {
        QMessageBox::critical(this,tr("Lỗi"), qry.lastError().text());
    }
}

void SanPham::on_pushButton_clicked()
{
    DangNhap conn;
    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select * from SanPham");

    qry->exec();
    modal->setQuery(*qry);

    ui ->tableView->setModel(modal);
    ui->tableView->show();

    conn.connClose();
    qDebug() << (modal->rowCount());
}
