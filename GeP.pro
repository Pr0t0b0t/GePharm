#-------------------------------------------------
#
# Project created by QtCreator 2019-02-10T13:04:42
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GeP
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

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    sav_sale.cpp \
    can_sal.cpp \
    inventory.cpp \
    savep_sal.cpp \
    open_day.cpp \
    activ_sg.cpp \
    desact_sg.cpp \
    disallp.cpp \
    byperished.cpp \
    broken_p.cpp \
    close_day.cpp \
    sav_cred.cpp \
    mag_invent.cpp \
    byform.cpp \
    sale_history.cpp \
    new_prod.cpp \
    del_prod.cpp \
    quant_mag.cpp \
    quant_ray.cpp \
    sell_price.cpp \
    buy_price.cpp \
    new_provider.cpp \
    provider_list.cpp \
    pass_cmd.cpp \
    inv_n_stock.cpp \
    print_rec.cpp \
    print_ticket.cpp \
    del_replen.cpp \
    const_replen.cpp \
    database.cpp \
    mymodel0.cpp

HEADERS += \
        mainwindow.h \
    sav_sale.h \
    can_sal.h \
    inventory.h \
    savep_sal.h \
    open_day.h \
    activ_sg.h \
    desact_sg.h \
    disallp.h \
    byperished.h \
    broken_p.h \
    close_day.h \
    sav_cred.h \
    mag_invent.h \
    byform.h \
    sale_history.h \
    new_prod.h \
    del_prod.h \
    quant_mag.h \
    quant_ray.h \
    sell_price.h \
    buy_price.h \
    new_provider.h \
    provider_list.h \
    pass_cmd.h \
    inv_n_stock.h \
    print_rec.h \
    print_ticket.h \
    del_replen.h \
    const_replen.h \
    database.h \
    mymodel0.h

FORMS += \
        mainwindow.ui \
    sav_sale.ui \
    can_sal.ui \
    inventory.ui \
    savep_sal.ui \
    open_day.ui \
    activ_sg.ui \
    desact_sg.ui \
    disallp.ui \
    byperished.ui \
    broken_p.ui \
    close_day.ui \
    sav_cred.ui \
    mag_invent.ui \
    byform.ui \
    sale_history.ui \
    new_prod.ui \
    del_prod.ui \
    quant_mag.ui \
    quant_ray.ui \
    sell_price.ui \
    buy_price.ui \
    new_provider.ui \
    provider_list.ui \
    pass_cmd.ui \
    inv_n_stock.ui \
    print_rec.ui \
    print_ticket.ui \
    del_replen.ui \
    const_replen.ui \
    database.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
