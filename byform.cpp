#include "byform.h"
#include "ui_byform.h"

Byform::Byform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Byform)
{
    ui->setupUi(this);
    setWindowTitle("Produits par forme pharmaceutique");
    setFixedSize(720,640);
}

Byform::~Byform()
{
    delete ui;
}
