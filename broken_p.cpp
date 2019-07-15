#include "broken_p.h"
#include "ui_broken_p.h"

Broken_p::Broken_p(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Broken_p)
{
    ui->setupUi(this);
    setWindowTitle("Produits cassés");
    setFixedSize(720,640);
}

Broken_p::~Broken_p()
{
    delete ui;
}
