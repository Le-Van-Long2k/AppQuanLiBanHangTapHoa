#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dangnhap.h>
#include <sanpham.h>
#include <nguoidung.h>
#include <thongtinnhanvien.h>
#include <donhang.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_SanPham_triggered();

    void on_action_NguoiDung_triggered();

    void on_action_DonHang_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
