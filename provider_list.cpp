#include "provider_list.h"
#include "ui_provider_list.h"

Provider_list::Provider_list(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Provider_list)
{
    ui->setupUi(this);
    setWindowTitle("Liste de fournisseurs");
    setFixedSize(720,640);
}

Provider_list::~Provider_list()
{
    delete ui;
}
