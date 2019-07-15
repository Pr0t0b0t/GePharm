#include "sell_price.h"
#include "ui_sell_price.h"

Sell_price::Sell_price(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sell_price)
{
    ui->setupUi(this);
    setFixedSize(720,640);
    setWindowTitle("Produit par prix de vente");
}

Sell_price::~Sell_price()
{
    delete ui;
}
