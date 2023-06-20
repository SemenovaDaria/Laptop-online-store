QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += C:/Qt/6.5.1/mingw_64/include
LIBS += -LC:/Qt/6.5.1/mingw_64/lib



SOURCES += \
    data.cpp \
    dialogadding.cpp \
    logo.cpp \
    main.cpp \
    mainwindow.cpp \
    qtableviewmodel.cpp

HEADERS += \
    data.h \
    dialogadding.h \
    logo.h \
    mainwindow.h \
    qtableviewmodel.h

FORMS += \
    dialogadding.ui \
    logo.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
