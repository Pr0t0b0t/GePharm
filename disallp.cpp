#include "disallp.h"
#include "ui_disallp.h"

Disallp::Disallp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Disallp)
{
    ui->setupUi(this);
    setWindowTitle("Liste de tous les produits");
    setFixedSize(720,640);
}

Disallp::~Disallp()
{
    delete ui;
}
