#include "inventory.h"
#include "ui_inventory.h"

Inventory::Inventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inventory)
{
    ui->setupUi(this);
    setFixedSize(720,640);
}

Inventory::~Inventory()
{
    delete ui;
}
