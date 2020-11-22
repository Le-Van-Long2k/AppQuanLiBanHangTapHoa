#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "thongtinnhanvien.h"
#include "sanpham.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Thoat_triggered()
{
   QApplication::quit();
}

void MainWindow::on_action_NhanVien_triggered()
{
    ThongTinNhanVien thongTinNhanVien(this);//    hien cua so
    thongTinNhanVien.setModal(true);//            thong tin
    thongTinNhanVien.exec();//                     nhan vien
}

void MainWindow::on_action_SanPham_triggered()
{
    SanPham sanpham(this);
    sanpham.setModal(true);
    sanpham.exec();
}
