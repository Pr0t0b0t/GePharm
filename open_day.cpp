#include "open_day.h"
#include "ui_open_day.h"

Open_day::Open_day(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Open_day)
{
    ui->setupUi(this);
    setWindowTitle("Ouvrir une journéé");
    setFixedSize(720,640);

  /*  QDateEdit *Opd = new QDateEdit(this);
    QLabel *namd = new QLabel("Journée..:",this);
    Opd->setGeometry(250,70,25,25);
    namd->setGeometry(120,70,25,25);*/
    //namd->setBuddy(Opd);
    QDate date = QDate::currentDate();
    QString dat = date.toString();
    QString format = "ddMMyyyy";
    ui->dateEdit->setDate(date);
    date.fromString(ui->dateEdit->text(),"MMddyyyy");
    date.toString(format);
}

Open_day::~Open_day()
{
    delete ui;
}
