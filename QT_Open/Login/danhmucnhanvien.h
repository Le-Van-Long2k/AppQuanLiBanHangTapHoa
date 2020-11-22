#ifndef DANHMUCNHANVIEN_H
#define DANHMUCNHANVIEN_H

#include <QMainWindow>

namespace Ui {
class DanhMucNhanVien;
}

class DanhMucNhanVien : public QMainWindow
{
    Q_OBJECT

public:
    explicit DanhMucNhanVien(QWidget *parent = nullptr);
    ~DanhMucNhanVien();

private slots:
    void on_actionNV_triggered();

private:
    Ui::DanhMucNhanVien *ui;
};

#endif // DANHMUCNHANVIEN_H
