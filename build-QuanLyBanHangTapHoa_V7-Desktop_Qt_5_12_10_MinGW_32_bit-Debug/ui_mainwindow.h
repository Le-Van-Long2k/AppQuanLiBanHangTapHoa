/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_NguoiDung;
    QAction *action_SanPham;
    QAction *action_DonHang;
    QAction *action_DoanhThu;
    QAction *action_TraCuu;
    QAction *action_TroGiup;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuNguoiDung;
    QMenu *menuSanPham;
    QMenu *menuDonHang;
    QMenu *menuDoanhThu;
    QMenu *menuTraCuu;
    QMenu *menuTroGiup;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1269, 683);
        action_NguoiDung = new QAction(MainWindow);
        action_NguoiDung->setObjectName(QString::fromUtf8("action_NguoiDung"));
        action_SanPham = new QAction(MainWindow);
        action_SanPham->setObjectName(QString::fromUtf8("action_SanPham"));
        action_DonHang = new QAction(MainWindow);
        action_DonHang->setObjectName(QString::fromUtf8("action_DonHang"));
        action_DoanhThu = new QAction(MainWindow);
        action_DoanhThu->setObjectName(QString::fromUtf8("action_DoanhThu"));
        action_TraCuu = new QAction(MainWindow);
        action_TraCuu->setObjectName(QString::fromUtf8("action_TraCuu"));
        action_TroGiup = new QAction(MainWindow);
        action_TroGiup->setObjectName(QString::fromUtf8("action_TroGiup"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1271, 641));
        label->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/thiet-ke-sieu-thi-mini2.jpg")));
        label->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1269, 26));
        menuNguoiDung = new QMenu(menubar);
        menuNguoiDung->setObjectName(QString::fromUtf8("menuNguoiDung"));
        menuSanPham = new QMenu(menubar);
        menuSanPham->setObjectName(QString::fromUtf8("menuSanPham"));
        menuDonHang = new QMenu(menubar);
        menuDonHang->setObjectName(QString::fromUtf8("menuDonHang"));
        menuDoanhThu = new QMenu(menubar);
        menuDoanhThu->setObjectName(QString::fromUtf8("menuDoanhThu"));
        menuTraCuu = new QMenu(menubar);
        menuTraCuu->setObjectName(QString::fromUtf8("menuTraCuu"));
        menuTroGiup = new QMenu(menubar);
        menuTroGiup->setObjectName(QString::fromUtf8("menuTroGiup"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNguoiDung->menuAction());
        menubar->addAction(menuSanPham->menuAction());
        menubar->addAction(menuDonHang->menuAction());
        menubar->addAction(menuDoanhThu->menuAction());
        menubar->addAction(menuTraCuu->menuAction());
        menubar->addAction(menuTroGiup->menuAction());
        menuNguoiDung->addAction(action_NguoiDung);
        menuSanPham->addAction(action_SanPham);
        menuDonHang->addAction(action_DonHang);
        menuDoanhThu->addAction(action_DoanhThu);
        menuTraCuu->addAction(action_TraCuu);
        menuTroGiup->addAction(action_TroGiup);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_NguoiDung->setText(QApplication::translate("MainWindow", "Xem", nullptr));
        action_SanPham->setText(QApplication::translate("MainWindow", "Xem", nullptr));
        action_DonHang->setText(QApplication::translate("MainWindow", "Xem", nullptr));
        action_DoanhThu->setText(QApplication::translate("MainWindow", "Xem", nullptr));
        action_TraCuu->setText(QApplication::translate("MainWindow", "Xem", nullptr));
        action_TroGiup->setText(QApplication::translate("MainWindow", "Xem", nullptr));
        label->setText(QString());
        menuNguoiDung->setTitle(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\255 ng\306\260\341\273\235i d\303\271ng", nullptr));
        menuSanPham->setTitle(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\255 s\341\272\243n ph\341\272\251m", nullptr));
        menuDonHang->setTitle(QApplication::translate("MainWindow", "Qu\341\272\243n l\303\255 \304\221\306\241n h\303\240ng", nullptr));
        menuDoanhThu->setTitle(QApplication::translate("MainWindow", "Th\341\273\221ng k\303\252 doanh thu", nullptr));
        menuTraCuu->setTitle(QApplication::translate("MainWindow", "Tra c\341\273\251u", nullptr));
        menuTroGiup->setTitle(QApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
