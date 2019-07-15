#include "buy_price.h"
#include "ui_buy_price.h"

Buy_price::Buy_price(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buy_price)
{
    ui->setupUi(this);
    setWindowTitle("Liste des produits par prix d'achats");
    setFixedSize(720,640);
}

Buy_price::~Buy_price()
{
    delete ui;
}
