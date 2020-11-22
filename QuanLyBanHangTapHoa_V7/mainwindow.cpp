#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sanpham.h"
#include "nguoidung.h"
#include "thongtinnhanvien.h"
#include "donhang.h"

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

void MainWindow::on_action_SanPham_triggered()
{
        SanPham sanpham(this);
        sanpham.setModal(true);
        sanpham.exec();
}

void MainWindow::on_action_NguoiDung_triggered()
{
    ThongTinNhanVien thongtinnhanvien(this);
    thongtinnhanvien.setModal(true);
    thongtinnhanvien.exec();
}

void MainWindow::on_action_DonHang_triggered()
{
    DonHang donhang(this);
    donhang.setModal(true);
    donhang.exec();
}
