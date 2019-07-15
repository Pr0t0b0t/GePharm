#include "quant_mag.h"
#include "ui_quant_mag.h"

Quant_mag::Quant_mag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quant_mag)
{
    ui->setupUi(this);
    setFixedSize(720,640);
    setWindowTitle("Produits par quantités en magasin");
}

Quant_mag::~Quant_mag()
{
    delete ui;
}
