#include "new_provider.h"
#include "ui_new_provider.h"

New_provider::New_provider(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_provider)
{
    ui->setupUi(this);
    setWindowTitle("Nouveau fournisseur");
    setFixedSize(720,640);
}

New_provider::~New_provider()
{
    delete ui;
}
