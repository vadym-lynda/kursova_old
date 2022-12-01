QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataBase
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    dbmanager.cpp \
    issueticket.cpp \
    main.cpp \
    mainwindow.cpp \
    newgame.cpp \
    sqldbmanager.cpp

HEADERS += \
    dbmanager.h \
    issueticket.h \
    mainwindow.h \
    newgame.h \
    sqldbmanager.h

FORMS += \
    issueticket.ui \
    mainwindow.ui \
    newgame.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
