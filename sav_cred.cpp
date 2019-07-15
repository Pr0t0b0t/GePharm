#include "sav_cred.h"
#include "ui_sav_cred.h"

Sav_cred::Sav_cred(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sav_cred)
{
    ui->setupUi(this);
    setFixedSize(720,640);
    setWindowTitle("Enregistrer une vente à crédit");
}

Sav_cred::~Sav_cred()
{
    delete ui;
}
