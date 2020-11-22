#include "thongtinnhanvien.h"
#include "ui_thongtinnhanvien.h"
#include <QMessageBox>
#include "login.h"

ThongTinNhanVien::ThongTinNhanVien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThongTinNhanVien)
{
    ui->setupUi(this);
    Login conn;
    if(!conn.connOpen())
        ui->label_ThongTinNhanVien->setText("Failed to open the database");
    else
        ui->label_ThongTinNhanVien->setText("connected...");

}

ThongTinNhanVien::~ThongTinNhanVien()
{
    delete ui;
}

void ThongTinNhanVien::on_pushButton_Them_clicked()
{
    Login conn;
    QString MaNhanVien, TenNhanVien, DiaChi, NgaySinh, SoDienThoai, GioiTinh;
    MaNhanVien = ui->lineEdit_MaNhanVien->text();
    TenNhanVien = ui->lineEdit_TenNhanVien->text();
    DiaChi = ui->lineEdit_DiaChi->text();
    NgaySinh = ui->dateEdit_NgaySinh->text();
    SoDienThoai = ui->lineEdit_SoDienThoai->text();
    //GioiTinh;

    if(!conn.connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;

    qry.prepare("insert into ThongTinNhanVien (MaNhanVien, TenNhanVien, DiaChi, SoDienThoai) values ('"+MaNhanVien+"', '"+TenNhanVien+"', '"+DiaChi+"', '"+SoDienThoai+"')" );

//   qry.prepare( "INSERT INTO ThongTinNhanVien (MaNhanVien, TenNhanVien, DiaChi, SoDienThoai) VALUES (:MaNhanVien, :TenNhanVien, :DiaChi, :SoDienThoai)" );
//    qry.bindValue(":MaNhanVien", MaNhanVien);
//    qry.bindValue(":TenNhanVien", TenNhanVien);
//    qry.bindValue(":DiaChi", DiaChi);
//    qry.bindValue(":SoDienThoai", SoDienThoai);

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

void ThongTinNhanVien::on_pushButton_XemDanhSach_clicked()
{
    Login conn;
    QSqlQueryModel *modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select * from ThongTinNhanVien");

    qry->exec();
    modal->setQuery(*qry);

    ui ->tableView_ThongTinNhanVien->setModel(modal);
    ui->tableView_ThongTinNhanVien->show();

    conn.connClose();
    qDebug() << (modal->rowCount());
}
