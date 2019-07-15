#include "print_rec.h"
#include "ui_print_rec.h"

Print_rec::Print_rec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Print_rec)
{
    ui->setupUi(this);
    setWindowTitle("Imprimer un reçu");
    setFixedSize(720,640);
}

Print_rec::~Print_rec()
{
    delete ui;
}
