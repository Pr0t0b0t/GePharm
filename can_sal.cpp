#include "can_sal.h"
#include "ui_can_sal.h"

Can_sal::Can_sal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Can_sal)
{
    ui->setupUi(this);
    setWindowTitle("Annuler une vente");
    setFixedSize(720,640);
}

Can_sal::~Can_sal()
{
    delete ui;
}
