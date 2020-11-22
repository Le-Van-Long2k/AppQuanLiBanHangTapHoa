/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Thoat;
    QAction *action_ChatLieu;
    QAction *action_NhanVien;
    QAction *action_KhachHang_2;
    QAction *action_HangHoa;
    QAction *action_HoaDonBan;
    QAction *action_HoaDonMua;
    QAction *action_HoaDon;
    QAction *action_Hang;
    QAction *action_KhachHang;
    QAction *action_HangTon;
    QAction *action_DoanhThu;
    QWidget *centralwidget;
    QLabel *label_MainWindow;
    QMenuBar *menubar;
    QMenu *menuihckjf;
    QMenu *menusfjf;
    QMenu *menuH_a_n;
    QMenu *menuT_m_ki_m;
    QMenu *menuB_o_c_o;
    QMenu *menuTr_gi_p;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(899, 628);
        action_Thoat = new QAction(MainWindow);
        action_Thoat->setObjectName(QString::fromUtf8("action_Thoat"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/images (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Thoat->setIcon(icon);
        action_ChatLieu = new QAction(MainWindow);
        action_ChatLieu->setObjectName(QString::fromUtf8("action_ChatLieu"));
        action_NhanVien = new QAction(MainWindow);
        action_NhanVien->setObjectName(QString::fromUtf8("action_NhanVien"));
        action_KhachHang_2 = new QAction(MainWindow);
        action_KhachHang_2->setObjectName(QString::fromUtf8("action_KhachHang_2"));
        action_HangHoa = new QAction(MainWindow);
        action_HangHoa->setObjectName(QString::fromUtf8("action_HangHoa"));
        action_HoaDonBan = new QAction(MainWindow);
        action_HoaDonBan->setObjectName(QString::fromUtf8("action_HoaDonBan"));
        action_HoaDonMua = new QAction(MainWindow);
        action_HoaDonMua->setObjectName(QString::fromUtf8("action_HoaDonMua"));
        action_HoaDon = new QAction(MainWindow);
        action_HoaDon->setObjectName(QString::fromUtf8("action_HoaDon"));
        action_Hang = new QAction(MainWindow);
        action_Hang->setObjectName(QString::fromUtf8("action_Hang"));
        action_KhachHang = new QAction(MainWindow);
        action_KhachHang->setObjectName(QString::fromUtf8("action_KhachHang"));
        action_HangTon = new QAction(MainWindow);
        action_HangTon->setObjectName(QString::fromUtf8("action_HangTon"));
        action_DoanhThu = new QAction(MainWindow);
        action_DoanhThu->setObjectName(QString::fromUtf8("action_DoanhThu"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_MainWindow = new QLabel(centralwidget);
        label_MainWindow->setObjectName(QString::fromUtf8("label_MainWindow"));
        label_MainWindow->setGeometry(QRect(0, 0, 901, 531));
        label_MainWindow->setPixmap(QPixmap(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/thiet-ke-sieu-thi-mini2.jpg")));
        label_MainWindow->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 899, 26));
        menuihckjf = new QMenu(menubar);
        menuihckjf->setObjectName(QString::fromUtf8("menuihckjf"));
        menusfjf = new QMenu(menubar);
        menusfjf->setObjectName(QString::fromUtf8("menusfjf"));
        menuH_a_n = new QMenu(menubar);
        menuH_a_n->setObjectName(QString::fromUtf8("menuH_a_n"));
        menuT_m_ki_m = new QMenu(menubar);
        menuT_m_ki_m->setObjectName(QString::fromUtf8("menuT_m_ki_m"));
        menuB_o_c_o = new QMenu(menubar);
        menuB_o_c_o->setObjectName(QString::fromUtf8("menuB_o_c_o"));
        menuTr_gi_p = new QMenu(menubar);
        menuTr_gi_p->setObjectName(QString::fromUtf8("menuTr_gi_p"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuihckjf->menuAction());
        menubar->addAction(menusfjf->menuAction());
        menubar->addAction(menuH_a_n->menuAction());
        menubar->addAction(menuT_m_ki_m->menuAction());
        menubar->addAction(menuB_o_c_o->menuAction());
        menubar->addAction(menuTr_gi_p->menuAction());
        menuihckjf->addAction(action_Thoat);
        menusfjf->addAction(action_ChatLieu);
        menusfjf->addAction(action_NhanVien);
        menusfjf->addAction(action_KhachHang_2);
        menusfjf->addAction(action_HangHoa);
        menuH_a_n->addAction(action_HoaDonBan);
        menuH_a_n->addAction(action_HoaDonMua);
        menuT_m_ki_m->addAction(action_HoaDon);
        menuT_m_ki_m->addAction(action_Hang);
        menuT_m_ki_m->addAction(action_KhachHang);
        menuB_o_c_o->addAction(action_HangTon);
        menuB_o_c_o->addAction(action_DoanhThu);
        toolBar->addAction(action_Thoat);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Thoat->setText(QCoreApplication::translate("MainWindow", "Tho\303\241t", nullptr));
#if QT_CONFIG(shortcut)
        action_Thoat->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ChatLieu->setText(QCoreApplication::translate("MainWindow", "Ch\341\272\245t li\341\273\207u", nullptr));
        action_NhanVien->setText(QCoreApplication::translate("MainWindow", "Nh\303\242n vi\303\252n", nullptr));
        action_KhachHang_2->setText(QCoreApplication::translate("MainWindow", "Kh\303\241ch h\303\240ng", nullptr));
        action_HangHoa->setText(QCoreApplication::translate("MainWindow", "H\303\240ng h\303\263a", nullptr));
        action_HoaDonBan->setText(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n b\303\241n", nullptr));
        action_HoaDonMua->setText(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n mua", nullptr));
        action_HoaDon->setText(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n", nullptr));
        action_Hang->setText(QCoreApplication::translate("MainWindow", "H\303\240ng", nullptr));
        action_KhachHang->setText(QCoreApplication::translate("MainWindow", "Kh\303\241ch h\303\240ng", nullptr));
        action_HangTon->setText(QCoreApplication::translate("MainWindow", "H\303\240ng t\341\273\223n ", nullptr));
        action_DoanhThu->setText(QCoreApplication::translate("MainWindow", "Doanh thu", nullptr));
        label_MainWindow->setText(QString());
        menuihckjf->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menusfjf->setTitle(QCoreApplication::translate("MainWindow", "Danh m\341\273\245c", nullptr));
        menuH_a_n->setTitle(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n", nullptr));
        menuT_m_ki_m->setTitle(QCoreApplication::translate("MainWindow", "T\303\254m ki\341\272\277m", nullptr));
        menuB_o_c_o->setTitle(QCoreApplication::translate("MainWindow", "B\303\241o c\303\241o ", nullptr));
        menuTr_gi_p->setTitle(QCoreApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
