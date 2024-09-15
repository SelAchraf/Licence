QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    corrige.cpp \
    main.cpp \
    mainwindow.cpp \
    page_1.cpp \
    page_10.cpp \
    page_2.cpp \
    page_3.cpp \
    page_4.cpp \
    page_5.cpp \
    page_6.cpp \
    page_7.cpp \
    page_8.cpp \
    page_9.cpp \
    page_consultation.cpp

HEADERS += \
    corrige.h \
    mainwindow.h \
    page_1.h \
    page_10.h \
    page_2.h \
    page_3.h \
    page_4.h \
    page_5.h \
    page_6.h \
    page_7.h \
    page_8.h \
    page_9.h \
    page_consultation.h

FORMS += \
    corrige.ui \
    mainwindow.ui \
    page_1.ui \
    page_10.ui \
    page_2.ui \
    page_3.ui \
    page_4.ui \
    page_5.ui \
    page_6.ui \
    page_7.ui \
    page_8.ui \
    page_9.ui \
    page_consultation.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Images/Atomic LOGO.png \
    ../../Images/Atomic LOGO.png \
    ../../Images/Atomic LOGO.png \
    ../../Images/Captures d’écran/Capture d’écran du 2023-12-03 17-30-06.png
