#include "sav_sale.h"
#include "ui_sav_sale.h"
#include "mymodel0.h"

Sav_sale::Sav_sale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sav_sale)
{
    ui->setupUi(this);
    setFixedSize(720,640);
    setWindowTitle("Enregistrer une vente");

    /*La liste des elements choisis TableView*/
    /*QTableView *view = new QTableView;
    view->setModel();
    view->show();*/
}

Sav_sale::~Sav_sale()
{
    delete ui;
}
