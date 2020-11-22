#ifndef THONGTINNHANVIEN_H
#define THONGTINNHANVIEN_H

#include <QDialog>
#include "login.h"

namespace Ui {
class ThongTinNhanVien;
}

class ThongTinNhanVien : public QDialog
{
    Q_OBJECT

public:
    Login conn;
    explicit ThongTinNhanVien(QWidget *parent = nullptr);
    ~ThongTinNhanVien();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Them_clicked();

    void on_pushButton_XemDanhSach_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::ThongTinNhanVien *ui;
};

#endif // THONGTINNHANVIEN_H
