/********************************************************************************
** Form generated from reading UI file 'sanpham.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SANPHAM_H
#define UI_SANPHAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SanPham
{
public:
    QTableView *tableView;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_ID_SanPham;
    QLineEdit *lineEdit_TenSanPham;
    QLabel *label_2;
    QLineEdit *lineEdit_LoaiSanPham;
    QLabel *label_3;
    QLineEdit *lineEdit_GiaNhap;
    QLabel *label_4;
    QLineEdit *lineEdit_GiaBan;
    QLabel *label_5;
    QLineEdit *lineEdit_ViTri;
    QLabel *label_6;
    QLineEdit *lineEdit_SoLuong;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_Them;
    QPushButton *pushButton_Xoa;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_TimKiem;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_4;
    QLabel *label_8;

    void setupUi(QDialog *SanPham)
    {
        if (SanPham->objectName().isEmpty())
            SanPham->setObjectName(QString::fromUtf8("SanPham"));
        SanPham->resize(1462, 785);
        tableView = new QTableView(SanPham);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(540, 90, 891, 651));
        groupBox = new QGroupBox(SanPham);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 441, 391));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 131, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("#9Slide01 Tieu de ngan"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit_ID_SanPham = new QLineEdit(groupBox);
        lineEdit_ID_SanPham->setObjectName(QString::fromUtf8("lineEdit_ID_SanPham"));
        lineEdit_ID_SanPham->setGeometry(QRect(180, 20, 251, 31));
        lineEdit_TenSanPham = new QLineEdit(groupBox);
        lineEdit_TenSanPham->setObjectName(QString::fromUtf8("lineEdit_TenSanPham"));
        lineEdit_TenSanPham->setGeometry(QRect(180, 60, 251, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 151, 31));
        label_2->setFont(font);
        lineEdit_LoaiSanPham = new QLineEdit(groupBox);
        lineEdit_LoaiSanPham->setObjectName(QString::fromUtf8("lineEdit_LoaiSanPham"));
        lineEdit_LoaiSanPham->setGeometry(QRect(180, 100, 251, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 151, 31));
        label_3->setFont(font);
        lineEdit_GiaNhap = new QLineEdit(groupBox);
        lineEdit_GiaNhap->setObjectName(QString::fromUtf8("lineEdit_GiaNhap"));
        lineEdit_GiaNhap->setGeometry(QRect(180, 140, 251, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 151, 31));
        label_4->setFont(font);
        lineEdit_GiaBan = new QLineEdit(groupBox);
        lineEdit_GiaBan->setObjectName(QString::fromUtf8("lineEdit_GiaBan"));
        lineEdit_GiaBan->setGeometry(QRect(180, 180, 251, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 180, 151, 31));
        label_5->setFont(font);
        lineEdit_ViTri = new QLineEdit(groupBox);
        lineEdit_ViTri->setObjectName(QString::fromUtf8("lineEdit_ViTri"));
        lineEdit_ViTri->setGeometry(QRect(180, 220, 251, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 220, 151, 31));
        label_6->setFont(font);
        lineEdit_SoLuong = new QLineEdit(groupBox);
        lineEdit_SoLuong->setObjectName(QString::fromUtf8("lineEdit_SoLuong"));
        lineEdit_SoLuong->setGeometry(QRect(180, 270, 251, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 270, 151, 31));
        label_7->setFont(font);
        groupBox_2 = new QGroupBox(SanPham);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 440, 441, 161));
        pushButton_Them = new QPushButton(groupBox_2);
        pushButton_Them->setObjectName(QString::fromUtf8("pushButton_Them"));
        pushButton_Them->setGeometry(QRect(40, 30, 131, 41));
        pushButton_Xoa = new QPushButton(groupBox_2);
        pushButton_Xoa->setObjectName(QString::fromUtf8("pushButton_Xoa"));
        pushButton_Xoa->setGeometry(QRect(250, 30, 131, 41));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 90, 131, 41));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 90, 131, 41));
        groupBox_3 = new QGroupBox(SanPham);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 640, 451, 131));
        groupBox_3->setFont(font);
        lineEdit_TimKiem = new QLineEdit(groupBox_3);
        lineEdit_TimKiem->setObjectName(QString::fromUtf8("lineEdit_TimKiem"));
        lineEdit_TimKiem->setGeometry(QRect(10, 90, 271, 31));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 90, 131, 31));
        groupBox_4 = new QGroupBox(SanPham);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(530, 30, 911, 731));
        QFont font1;
        font1.setFamily(QString::fromUtf8("#9Slide01 Tieu de ngan"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_4->setFont(font1);
        label_8 = new QLabel(SanPham);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(-46, -15, 1511, 811));
        label_8->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/sky660.jpg")));
        label_8->setScaledContents(true);
        label_8->raise();
        groupBox_4->raise();
        groupBox->raise();
        tableView->raise();
        groupBox_2->raise();
        groupBox_3->raise();

        retranslateUi(SanPham);

        QMetaObject::connectSlotsByName(SanPham);
    } // setupUi

    void retranslateUi(QDialog *SanPham)
    {
        SanPham->setWindowTitle(QApplication::translate("SanPham", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("SanPham", "ID_S\341\272\243n Ph\341\272\251m", nullptr));
        label_2->setText(QApplication::translate("SanPham", "T\303\252n s\341\272\243n ph\341\272\251m", nullptr));
        label_3->setText(QApplication::translate("SanPham", "Lo\341\272\241i s\341\272\243n ph\341\272\251m", nullptr));
        label_4->setText(QApplication::translate("SanPham", "Gi\303\241 nh\341\272\255p", nullptr));
        label_5->setText(QApplication::translate("SanPham", "Gi\303\241 b\303\241n", nullptr));
        label_6->setText(QApplication::translate("SanPham", "V\341\273\213 tr\303\255", nullptr));
        label_7->setText(QApplication::translate("SanPham", "S\341\273\221 l\306\260\341\273\243ng", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_Them->setText(QApplication::translate("SanPham", "Th\303\252m", nullptr));
        pushButton_Xoa->setText(QApplication::translate("SanPham", "X\303\263a", nullptr));
        pushButton->setText(QApplication::translate("SanPham", "Xem", nullptr));
        pushButton_2->setText(QApplication::translate("SanPham", "S\341\273\255a", nullptr));
        groupBox_3->setTitle(QApplication::translate("SanPham", "T\303\254m ki\341\272\277m", nullptr));
        pushButton_3->setText(QApplication::translate("SanPham", "T\303\254m ki\341\272\277m", nullptr));
        groupBox_4->setTitle(QApplication::translate("SanPham", "Danh m\341\273\245c s\341\272\243n ph\341\272\251m", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SanPham: public Ui_SanPham {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SANPHAM_H
