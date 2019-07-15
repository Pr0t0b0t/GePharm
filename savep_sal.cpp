#include "savep_sal.h"
#include "ui_savep_sal.h"

Savep_sal::Savep_sal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Savep_sal)
{
    ui->setupUi(this);
    setFixedSize(720,640);
    setWindowTitle("Enregistrer une vente privée");
}

Savep_sal::~Savep_sal()
{
    delete ui;
}
