/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionChat_lieu;
    QAction *actionNhan_vien;
    QAction *actionKhach_hang;
    QAction *actionHang_hoa;
    QAction *actionHoa_don_ban;
    QAction *actionHoa_don_ban_2;
    QAction *actionHang;
    QAction *actionKhach_hang_2;
    QAction *actionHang_ton;
    QAction *actionDoanh_thu;
    QAction *actionTro_giup;
    QAction *actionVai_net;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNh_n_vi_n;
    QMenu *menuHoa_don;
    QMenu *menuTim_kiem;
    QMenu *menuBao_cao;
    QMenu *menuTro_giup;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionChat_lieu = new QAction(MainWindow);
        actionChat_lieu->setObjectName(QString::fromUtf8("actionChat_lieu"));
        actionNhan_vien = new QAction(MainWindow);
        actionNhan_vien->setObjectName(QString::fromUtf8("actionNhan_vien"));
        actionKhach_hang = new QAction(MainWindow);
        actionKhach_hang->setObjectName(QString::fromUtf8("actionKhach_hang"));
        actionHang_hoa = new QAction(MainWindow);
        actionHang_hoa->setObjectName(QString::fromUtf8("actionHang_hoa"));
        actionHoa_don_ban = new QAction(MainWindow);
        actionHoa_don_ban->setObjectName(QString::fromUtf8("actionHoa_don_ban"));
        actionHoa_don_ban_2 = new QAction(MainWindow);
        actionHoa_don_ban_2->setObjectName(QString::fromUtf8("actionHoa_don_ban_2"));
        actionHang = new QAction(MainWindow);
        actionHang->setObjectName(QString::fromUtf8("actionHang"));
        actionKhach_hang_2 = new QAction(MainWindow);
        actionKhach_hang_2->setObjectName(QString::fromUtf8("actionKhach_hang_2"));
        actionHang_ton = new QAction(MainWindow);
        actionHang_ton->setObjectName(QString::fromUtf8("actionHang_ton"));
        actionDoanh_thu = new QAction(MainWindow);
        actionDoanh_thu->setObjectName(QString::fromUtf8("actionDoanh_thu"));
        actionTro_giup = new QAction(MainWindow);
        actionTro_giup->setObjectName(QString::fromUtf8("actionTro_giup"));
        actionVai_net = new QAction(MainWindow);
        actionVai_net->setObjectName(QString::fromUtf8("actionVai_net"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNh_n_vi_n = new QMenu(menubar);
        menuNh_n_vi_n->setObjectName(QString::fromUtf8("menuNh_n_vi_n"));
        menuHoa_don = new QMenu(menubar);
        menuHoa_don->setObjectName(QString::fromUtf8("menuHoa_don"));
        menuTim_kiem = new QMenu(menubar);
        menuTim_kiem->setObjectName(QString::fromUtf8("menuTim_kiem"));
        menuBao_cao = new QMenu(menubar);
        menuBao_cao->setObjectName(QString::fromUtf8("menuBao_cao"));
        menuTro_giup = new QMenu(menubar);
        menuTro_giup->setObjectName(QString::fromUtf8("menuTro_giup"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuNh_n_vi_n->menuAction());
        menubar->addAction(menuHoa_don->menuAction());
        menubar->addAction(menuTim_kiem->menuAction());
        menubar->addAction(menuBao_cao->menuAction());
        menubar->addAction(menuTro_giup->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuNh_n_vi_n->addAction(actionChat_lieu);
        menuNh_n_vi_n->addAction(actionNhan_vien);
        menuNh_n_vi_n->addAction(actionKhach_hang);
        menuNh_n_vi_n->addAction(actionHang_hoa);
        menuHoa_don->addAction(actionHoa_don_ban);
        menuTim_kiem->addAction(actionHoa_don_ban_2);
        menuTim_kiem->addAction(actionHang);
        menuTim_kiem->addAction(actionKhach_hang_2);
        menuBao_cao->addAction(actionHang_ton);
        menuBao_cao->addAction(actionDoanh_thu);
        menuTro_giup->addAction(actionTro_giup);
        menuTro_giup->addAction(actionVai_net);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionChat_lieu->setText(QCoreApplication::translate("MainWindow", "Chat lieu", nullptr));
        actionNhan_vien->setText(QCoreApplication::translate("MainWindow", "Nhan vien", nullptr));
        actionKhach_hang->setText(QCoreApplication::translate("MainWindow", "Khach hang", nullptr));
        actionHang_hoa->setText(QCoreApplication::translate("MainWindow", "Hang hoa", nullptr));
        actionHoa_don_ban->setText(QCoreApplication::translate("MainWindow", "Hoa don ban", nullptr));
        actionHoa_don_ban_2->setText(QCoreApplication::translate("MainWindow", "Hoa don ban", nullptr));
        actionHang->setText(QCoreApplication::translate("MainWindow", "Hang", nullptr));
        actionKhach_hang_2->setText(QCoreApplication::translate("MainWindow", "Khach hang", nullptr));
        actionHang_ton->setText(QCoreApplication::translate("MainWindow", "Hang ton", nullptr));
        actionDoanh_thu->setText(QCoreApplication::translate("MainWindow", "Doanh thu", nullptr));
        actionTro_giup->setText(QCoreApplication::translate("MainWindow", "Tro giup", nullptr));
        actionVai_net->setText(QCoreApplication::translate("MainWindow", "Vai net", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuNh_n_vi_n->setTitle(QCoreApplication::translate("MainWindow", "Danh muc", nullptr));
        menuHoa_don->setTitle(QCoreApplication::translate("MainWindow", "Hoa don", nullptr));
        menuTim_kiem->setTitle(QCoreApplication::translate("MainWindow", "Tim kiem", nullptr));
        menuBao_cao->setTitle(QCoreApplication::translate("MainWindow", "Bao cao", nullptr));
        menuTro_giup->setTitle(QCoreApplication::translate("MainWindow", "Tro giup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
