#include "new_prod.h"
#include "ui_new_prod.h"

New_prod::New_prod(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_prod)
{
    ui->setupUi(this);
    setWindowTitle("Fiche d'un nouveau produit");
    setFixedSize(720,640);
}

New_prod::~New_prod()
{
    delete ui;
}
