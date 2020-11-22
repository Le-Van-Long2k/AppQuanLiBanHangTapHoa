/********************************************************************************
** Form generated from reading UI file 'thongtinnhanvien.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THONGTINNHANVIEN_H
#define UI_THONGTINNHANVIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ThongTinNhanVien
{
public:
    QTextBrowser *textBrowser;
    QDateEdit *dateEdit_NgaySinh;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_MaNhanVien;
    QLineEdit *lineEdit_TenNhanVien;
    QLineEdit *lineEdit_DiaChi;
    QLineEdit *lineEdit_SoDienThoai;
    QRadioButton *radioButton_Nam;
    QRadioButton *radioButton_Nu;
    QPushButton *pushButton_Them;
    QPushButton *pushButton_Sua;
    QPushButton *pushButton_XemDanhSach;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_ThongTinNhanVien;
    QTableView *tableView_ThongTinNhanVien;

    void setupUi(QDialog *ThongTinNhanVien)
    {
        if (ThongTinNhanVien->objectName().isEmpty())
            ThongTinNhanVien->setObjectName(QString::fromUtf8("ThongTinNhanVien"));
        ThongTinNhanVien->resize(1350, 570);
        textBrowser = new QTextBrowser(ThongTinNhanVien);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(150, 20, 641, 71));
        dateEdit_NgaySinh = new QDateEdit(ThongTinNhanVien);
        dateEdit_NgaySinh->setObjectName(QString::fromUtf8("dateEdit_NgaySinh"));
        dateEdit_NgaySinh->setGeometry(QRect(650, 170, 111, 22));
        label = new QLabel(ThongTinNhanVien);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 110, 91, 16));
        label_2 = new QLabel(ThongTinNhanVien);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 140, 91, 16));
        label_3 = new QLabel(ThongTinNhanVien);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(560, 110, 55, 16));
        label_7 = new QLabel(ThongTinNhanVien);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 170, 55, 16));
        label_8 = new QLabel(ThongTinNhanVien);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(560, 140, 91, 16));
        label_9 = new QLabel(ThongTinNhanVien);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(560, 170, 61, 16));
        lineEdit_MaNhanVien = new QLineEdit(ThongTinNhanVien);
        lineEdit_MaNhanVien->setObjectName(QString::fromUtf8("lineEdit_MaNhanVien"));
        lineEdit_MaNhanVien->setGeometry(QRect(140, 110, 181, 22));
        lineEdit_TenNhanVien = new QLineEdit(ThongTinNhanVien);
        lineEdit_TenNhanVien->setObjectName(QString::fromUtf8("lineEdit_TenNhanVien"));
        lineEdit_TenNhanVien->setGeometry(QRect(140, 140, 181, 22));
        lineEdit_DiaChi = new QLineEdit(ThongTinNhanVien);
        lineEdit_DiaChi->setObjectName(QString::fromUtf8("lineEdit_DiaChi"));
        lineEdit_DiaChi->setGeometry(QRect(650, 110, 181, 22));
        lineEdit_SoDienThoai = new QLineEdit(ThongTinNhanVien);
        lineEdit_SoDienThoai->setObjectName(QString::fromUtf8("lineEdit_SoDienThoai"));
        lineEdit_SoDienThoai->setGeometry(QRect(650, 140, 181, 22));
        radioButton_Nam = new QRadioButton(ThongTinNhanVien);
        radioButton_Nam->setObjectName(QString::fromUtf8("radioButton_Nam"));
        radioButton_Nam->setGeometry(QRect(140, 170, 61, 20));
        radioButton_Nu = new QRadioButton(ThongTinNhanVien);
        radioButton_Nu->setObjectName(QString::fromUtf8("radioButton_Nu"));
        radioButton_Nu->setGeometry(QRect(260, 170, 61, 20));
        pushButton_Them = new QPushButton(ThongTinNhanVien);
        pushButton_Them->setObjectName(QString::fromUtf8("pushButton_Them"));
        pushButton_Them->setGeometry(QRect(10, 490, 93, 28));
        pushButton_Sua = new QPushButton(ThongTinNhanVien);
        pushButton_Sua->setObjectName(QString::fromUtf8("pushButton_Sua"));
        pushButton_Sua->setGeometry(QRect(140, 490, 93, 28));
        pushButton_XemDanhSach = new QPushButton(ThongTinNhanVien);
        pushButton_XemDanhSach->setObjectName(QString::fromUtf8("pushButton_XemDanhSach"));
        pushButton_XemDanhSach->setGeometry(QRect(270, 490, 101, 28));
        pushButton_4 = new QPushButton(ThongTinNhanVien);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 490, 93, 28));
        pushButton_5 = new QPushButton(ThongTinNhanVien);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(530, 490, 93, 28));
        label_ThongTinNhanVien = new QLabel(ThongTinNhanVien);
        label_ThongTinNhanVien->setObjectName(QString::fromUtf8("label_ThongTinNhanVien"));
        label_ThongTinNhanVien->setGeometry(QRect(670, 496, 201, 20));
        tableView_ThongTinNhanVien = new QTableView(ThongTinNhanVien);
        tableView_ThongTinNhanVien->setObjectName(QString::fromUtf8("tableView_ThongTinNhanVien"));
        tableView_ThongTinNhanVien->setGeometry(QRect(20, 220, 1301, 221));

        retranslateUi(ThongTinNhanVien);

        QMetaObject::connectSlotsByName(ThongTinNhanVien);
    } // setupUi

    void retranslateUi(QDialog *ThongTinNhanVien)
    {
        ThongTinNhanVien->setWindowTitle(QApplication::translate("ThongTinNhanVien", "Th\303\264ng tin nh\303\242n vi\303\252n", nullptr));
        textBrowser->setHtml(QApplication::translate("ThongTinNhanVien", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#5500ff;\">Th\303\264ng tin nh\303\242n vi\303\252n</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("ThongTinNhanVien", "M\303\243 nh\303\242n vi\303\252n", nullptr));
        label_2->setText(QApplication::translate("ThongTinNhanVien", "T\303\252n nh\303\242n vi\303\252n", nullptr));
        label_3->setText(QApplication::translate("ThongTinNhanVien", "\304\220\341\273\213a ch\341\273\211", nullptr));
        label_7->setText(QApplication::translate("ThongTinNhanVien", "Gi\341\273\233i t\303\255nh", nullptr));
        label_8->setText(QApplication::translate("ThongTinNhanVien", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        label_9->setText(QApplication::translate("ThongTinNhanVien", "Ng\303\240y sinh", nullptr));
        radioButton_Nam->setText(QApplication::translate("ThongTinNhanVien", "Nam", nullptr));
        radioButton_Nu->setText(QApplication::translate("ThongTinNhanVien", "N\341\273\257", nullptr));
        pushButton_Them->setText(QApplication::translate("ThongTinNhanVien", "Th\303\252m", nullptr));
        pushButton_Sua->setText(QApplication::translate("ThongTinNhanVien", "S\341\273\255a", nullptr));
        pushButton_XemDanhSach->setText(QApplication::translate("ThongTinNhanVien", "Xem danh s\303\241ch", nullptr));
        pushButton_4->setText(QApplication::translate("ThongTinNhanVien", "L\306\260u", nullptr));
        pushButton_5->setText(QApplication::translate("ThongTinNhanVien", "\304\220\303\263ng", nullptr));
        label_ThongTinNhanVien->setText(QApplication::translate("ThongTinNhanVien", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThongTinNhanVien: public Ui_ThongTinNhanVien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THONGTINNHANVIEN_H
