QT       += core gui multimedia multimediawidgets webkitwidgets printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calculator.cpp \
    fenetrevideo.cpp \
    main.cpp \
    mainwindow.cpp \
    navigateurweb.cpp \
    note.cpp \
    paint.cpp \
    scribblearea.cpp

HEADERS += \
    calculator.h \
    fenetrevideo.h \
    mainwindow.h \
    navigateurweb.h \
    note.h \
    paint.h \
    scribblearea.h

FORMS += \
    calculator.ui \
    fenetrevideo.ui \
    mainwindow.ui \
    navigateurweb.ui \
    note.ui \
    paint.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ResourcesNote.qrc \
    resources.qrc
