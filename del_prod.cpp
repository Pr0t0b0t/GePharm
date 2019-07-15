#include "del_prod.h"
#include "ui_del_prod.h"

Del_prod::Del_prod(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Del_prod)
{
    ui->setupUi(this);
    setWindowTitle("Suppression d'un produit");
    setFixedSize(720,640);
}

Del_prod::~Del_prod()
{
    delete ui;
}
