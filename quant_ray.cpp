#include "quant_ray.h"
#include "ui_quant_ray.h"

Quant_ray::Quant_ray(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quant_ray)
{
    ui->setupUi(this);
    setWindowTitle("Produit par quantité en rayon");
    setFixedSize(720,640);
}

Quant_ray::~Quant_ray()
{
    delete ui;
}
