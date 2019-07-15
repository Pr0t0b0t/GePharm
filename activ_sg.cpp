#include "activ_sg.h"
#include "ui_activ_sg.h"

Activ_sg::Activ_sg(QWidget *parent) :
    QDialog(parent),
   ui(new Ui::Activ_sg)
{
    ui->setupUi(this);
    setWindowTitle("Lancement d'une semaine de garde");
    //setFixedSize(720,640);
    QDateEdit *deb = new QDateEdit;
    QDateEdit *fin = new QDateEdit;

     QFormLayout *formLayout = new QFormLayout;
     formLayout->addRow("Date de début.:",deb);
     formLayout->addRow("Date de fin:",fin);

     QVBoxLayout *layoutPrincipal = new QVBoxLayout;

     layoutPrincipal->addLayout(formLayout); // Ajout du layout de formulaire
     setLayout(layoutPrincipal);


}

Activ_sg::~Activ_sg()
{
    delete ui;
}
