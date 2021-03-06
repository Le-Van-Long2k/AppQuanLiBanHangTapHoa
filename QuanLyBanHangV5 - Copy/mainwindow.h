#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "thongtinnhanvien.h"
#include "sanpham.h"

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
    void on_action_Thoat_triggered();

    void on_action_NhanVien_triggered();

    void on_action_HangHoa_triggered();

    void on_action_SanPham_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
