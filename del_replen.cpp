#include "del_replen.h"
#include "ui_del_replen.h"

Del_replen::Del_replen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Del_replen)
{
    ui->setupUi(this);
    setWindowTitle("Supprimer une liste de réapprovisionement");
}

Del_replen::~Del_replen()
{
    delete ui;
}
