#ifndef NGUOIDUNG_H
#define NGUOIDUNG_H

#include <QDialog>
#include "dangnhap.h"

namespace Ui {
class NguoiDung;
}

class NguoiDung : public QDialog
{
    Q_OBJECT

public:
    DangNhap conn;
    explicit NguoiDung(QWidget *parent = nullptr);
    ~NguoiDung();

private slots:
    void on_pushButton_Xem_clicked();

private:
    Ui::NguoiDung *ui;
};

#endif // NGUOIDUNG_H
