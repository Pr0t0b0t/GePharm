#include "close_day.h"
#include "ui_close_day.h"

Close_day::Close_day(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Close_day)
{
    ui->setupUi(this);
    setWindowTitle("Fermer la journéee");
    setFixedSize(720,640);
}

Close_day::~Close_day()
{
    delete ui;
}
