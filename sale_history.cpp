#include "sale_history.h"
#include "ui_sale_history.h"

Sale_history::Sale_history(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sale_history)
{
    ui->setupUi(this);
    setFixedSize(720,640);
    setWindowTitle("Historuque de vente");
}

Sale_history::~Sale_history()
{
    delete ui;
}
