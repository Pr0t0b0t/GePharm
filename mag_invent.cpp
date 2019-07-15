#include "mag_invent.h"
#include "ui_mag_invent.h"

Mag_invent::Mag_invent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mag_invent)
{
    ui->setupUi(this);
    setWindowTitle("Inventaire en magasin");
    setFixedSize(720,640);
}

Mag_invent::~Mag_invent()
{
    delete ui;
}
