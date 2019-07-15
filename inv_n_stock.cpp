#include "inv_n_stock.h"
#include "ui_inv_n_stock.h"

Inv_n_stock::Inv_n_stock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inv_n_stock)
{
    ui->setupUi(this);
    setWindowTitle("Inventaire du stock");
    setFixedSize(720,640);
}

Inv_n_stock::~Inv_n_stock()
{
    delete ui;
}
