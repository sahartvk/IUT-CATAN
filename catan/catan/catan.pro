QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    catan1.cpp \
    catan2.cpp \
    catan3.cpp \
    main.cpp \
    catan.cpp \
    playground_3.cpp \
    playground_4.cpp \
    setting.cpp \
    sign_in.cpp \
    sign_up.cpp \
    trade.cpp

HEADERS += \
    catan.h \
    catan1.h \
    catan2.h \
    catan3.h \
    playground_3.h \
    playground_4.h \
    setting.h \
    sign_in.h \
    sign_up.h \
    trade.h

FORMS += \
    catan.ui \
    catan1.ui \
    catan2.ui \
    catan3.ui \
    playground_3.ui \
    playground_4.ui \
    setting.ui \
    sign_in.ui \
    sign_up.ui \
    trade.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES +=
