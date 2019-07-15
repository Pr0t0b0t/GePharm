#include "desact_sg.h"
#include "ui_desact_sg.h"

Desact_sg::Desact_sg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Desact_sg)
{
    ui->setupUi(this);
    setWindowTitle("Clore la semaine de garde");
    setFixedSize(720,640);
}

Desact_sg::~Desact_sg()
{
    delete ui;
}
