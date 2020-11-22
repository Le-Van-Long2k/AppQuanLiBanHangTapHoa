QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sqlite_DB
TEMPLATE = app
CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dangnhap.cpp \
    donhang.cpp \
    main.cpp \
    mainwindow.cpp \
    nguoidung.cpp \
    sanpham.cpp \
    thongtinnhanvien.cpp

HEADERS += \
    dangnhap.h \
    donhang.h \
    mainwindow.h \
    nguoidung.h \
    sanpham.h \
    thongtinnhanvien.h

FORMS += \
    dangnhap.ui \
    donhang.ui \
    mainwindow.ui \
    nguoidung.ui \
    sanpham.ui \
    thongtinnhanvien.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
