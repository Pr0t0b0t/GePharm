#include "const_replen.h"
#include "ui_const_replen.h"

Const_replen::Const_replen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Const_replen)
{
    ui->setupUi(this);
}

Const_replen::~Const_replen()
{
    delete ui;
}
