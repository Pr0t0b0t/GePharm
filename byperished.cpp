#include "byperished.h"
#include "ui_byperished.h"

Byperished::Byperished(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Byperished)
{
    ui->setupUi(this);
    setWindowTitle("Produits par date de péremption");
    setFixedSize(720,640);
}

Byperished::~Byperished()
{
    delete ui;
}
