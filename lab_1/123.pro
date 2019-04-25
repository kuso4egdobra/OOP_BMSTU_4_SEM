#-------------------------------------------------
#
# Project created by QtCreator 2019-03-04T08:32:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 123
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
CONFIG += console

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    file_funcs.cpp \
    move_skale_turn_funcs.cpp \
    init_free_background.cpp \
    update_scene.cpp \
    task_manager.cpp \
    pre_move_skale_turn.cpp \
    pre_file_funcs.cpp \
    pre_update_scene.cpp

HEADERS += \
        mainwindow.h \
    libraries_and_enum.h \
    mainwindow_buttons_and_errs.h \
    file_funcs.h \
    move_skale_turn_funcs.h \
    init_free_background.h \
    update_scene.h \
    task_manager.h \
    pre_move_skale_turn.h \
    pre_file_funcs.h \
    pre_update_scene.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-123-Desktop_Qt_5_12_1_clang_64bit-Debug/123.app
