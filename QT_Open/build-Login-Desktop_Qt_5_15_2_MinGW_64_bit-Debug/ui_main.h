/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCh_t_li_u;
    QAction *actionNhanVien;
    QAction *actionH_ng_h_a;
    QAction *actionH_a_n_b_n;
    QAction *actionH_a_n_nh_p_h_ng;
    QAction *actionH_a_n;
    QAction *actionH_ng;
    QAction *actionKh_ch_h_ng;
    QAction *actionH_ng_t_n;
    QAction *actionDoanh_thu;
    QAction *actionTr_gi_p;
    QWidget *centralwidget;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuDanh_m_c;
    QMenu *menuH_a_n;
    QMenu *menuT_m_ki_m;
    QMenu *menuB_o_c_o;
    QMenu *menuTr_gi_p;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionCh_t_li_u = new QAction(MainWindow);
        actionCh_t_li_u->setObjectName(QString::fromUtf8("actionCh_t_li_u"));
        actionNhanVien = new QAction(MainWindow);
        actionNhanVien->setObjectName(QString::fromUtf8("actionNhanVien"));
        actionH_ng_h_a = new QAction(MainWindow);
        actionH_ng_h_a->setObjectName(QString::fromUtf8("actionH_ng_h_a"));
        actionH_a_n_b_n = new QAction(MainWindow);
        actionH_a_n_b_n->setObjectName(QString::fromUtf8("actionH_a_n_b_n"));
        actionH_a_n_nh_p_h_ng = new QAction(MainWindow);
        actionH_a_n_nh_p_h_ng->setObjectName(QString::fromUtf8("actionH_a_n_nh_p_h_ng"));
        actionH_a_n = new QAction(MainWindow);
        actionH_a_n->setObjectName(QString::fromUtf8("actionH_a_n"));
        actionH_ng = new QAction(MainWindow);
        actionH_ng->setObjectName(QString::fromUtf8("actionH_ng"));
        actionKh_ch_h_ng = new QAction(MainWindow);
        actionKh_ch_h_ng->setObjectName(QString::fromUtf8("actionKh_ch_h_ng"));
        actionH_ng_t_n = new QAction(MainWindow);
        actionH_ng_t_n->setObjectName(QString::fromUtf8("actionH_ng_t_n"));
        actionDoanh_thu = new QAction(MainWindow);
        actionDoanh_thu->setObjectName(QString::fromUtf8("actionDoanh_thu"));
        actionTr_gi_p = new QAction(MainWindow);
        actionTr_gi_p->setObjectName(QString::fromUtf8("actionTr_gi_p"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(0, 0, 27, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8("F:/H\303\254nh \341\272\243nh/Saved Pictures/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(30, 0, 27, 22));
        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(60, 0, 27, 22));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuDanh_m_c = new QMenu(menubar);
        menuDanh_m_c->setObjectName(QString::fromUtf8("menuDanh_m_c"));
        menuH_a_n = new QMenu(menubar);
        menuH_a_n->setObjectName(QString::fromUtf8("menuH_a_n"));
        menuT_m_ki_m = new QMenu(menubar);
        menuT_m_ki_m->setObjectName(QString::fromUtf8("menuT_m_ki_m"));
        menuB_o_c_o = new QMenu(menubar);
        menuB_o_c_o->setObjectName(QString::fromUtf8("menuB_o_c_o"));
        menuTr_gi_p = new QMenu(menubar);
        menuTr_gi_p->setObjectName(QString::fromUtf8("menuTr_gi_p"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuDanh_m_c->menuAction());
        menubar->addAction(menuH_a_n->menuAction());
        menubar->addAction(menuT_m_ki_m->menuAction());
        menubar->addAction(menuB_o_c_o->menuAction());
        menubar->addAction(menuTr_gi_p->menuAction());
        menuDanh_m_c->addAction(actionCh_t_li_u);
        menuDanh_m_c->addSeparator();
        menuDanh_m_c->addAction(actionNhanVien);
        menuDanh_m_c->addSeparator();
        menuDanh_m_c->addAction(actionH_ng_h_a);
        menuH_a_n->addAction(actionH_a_n_b_n);
        menuH_a_n->addSeparator();
        menuH_a_n->addAction(actionH_a_n_nh_p_h_ng);
        menuT_m_ki_m->addAction(actionH_a_n);
        menuT_m_ki_m->addSeparator();
        menuT_m_ki_m->addAction(actionH_ng);
        menuT_m_ki_m->addSeparator();
        menuT_m_ki_m->addAction(actionKh_ch_h_ng);
        menuB_o_c_o->addAction(actionH_ng_t_n);
        menuB_o_c_o->addSeparator();
        menuB_o_c_o->addAction(actionDoanh_thu);
        menuTr_gi_p->addAction(actionTr_gi_p);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCh_t_li_u->setText(QCoreApplication::translate("MainWindow", "Ch\341\272\245t li\341\273\207u", nullptr));
        actionNhanVien->setText(QCoreApplication::translate("MainWindow", "Nh\303\242n vi\303\252n", nullptr));
        actionH_ng_h_a->setText(QCoreApplication::translate("MainWindow", "H\303\240ng h\303\263a", nullptr));
        actionH_a_n_b_n->setText(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n b\303\241n", nullptr));
        actionH_a_n_nh_p_h_ng->setText(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n nh\341\272\255p h\303\240ng", nullptr));
        actionH_a_n->setText(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n", nullptr));
        actionH_ng->setText(QCoreApplication::translate("MainWindow", "H\303\240ng", nullptr));
        actionKh_ch_h_ng->setText(QCoreApplication::translate("MainWindow", "Kh\303\241ch h\303\240ng", nullptr));
        actionH_ng_t_n->setText(QCoreApplication::translate("MainWindow", "H\303\240ng t\341\273\223n", nullptr));
        actionDoanh_thu->setText(QCoreApplication::translate("MainWindow", "Doanh thu", nullptr));
        actionTr_gi_p->setText(QCoreApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        menuDanh_m_c->setTitle(QCoreApplication::translate("MainWindow", "Danh m\341\273\245c", nullptr));
        menuH_a_n->setTitle(QCoreApplication::translate("MainWindow", "H\303\263a \304\221\306\241n", nullptr));
        menuT_m_ki_m->setTitle(QCoreApplication::translate("MainWindow", "T\303\254m ki\341\272\277m", nullptr));
        menuB_o_c_o->setTitle(QCoreApplication::translate("MainWindow", "B\303\241o c\303\241o ", nullptr));
        menuTr_gi_p->setTitle(QCoreApplication::translate("MainWindow", "Tr\341\273\243 gi\303\272p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
