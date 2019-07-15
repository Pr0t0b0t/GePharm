#include "database.h"
#include "ui_database.h"

Database::Database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Database)
{
    ui->setupUi(this);
    /*QLineEdit *hst = new QLineEdit;
    QLineEdit *psw = new QLineEdit;
    QLineEdit *pt = new QLineEdit;
    QLineEdit *usr = new QLineEdit;

    //Largeur de la line Edit
    hst->setMaximumWidth(200);
    psw->setMaximumWidth(200);
    pt->setMaximumWidth(200);
    usr->setMaximumWidth(200);

    //Line edit mode
    psw->setEchoMode(QLineEdit::Password);

    ok = new QPushButton(" Connection",this);
    ok->setToolTip("Cliquer pour se connecter à la base de données");
    ok->setFont(QFont("Segoe UI",10,25,true));
    ok->setMaximumWidth(100);
    ok->setGeometry(430,420,140,30);

    an = new QPushButton(" Aide",this);
    an->setToolTip("Cliquer pour");
    an->setFont(QFont("Segoe UI",10,20,true));
    an->setMaximumWidth(100);
    an->setGeometry(560,420,140,30);

    QHBoxLayout *hbx = new QHBoxLayout;
    hbx->addWidget(ok);
    hbx->addWidget(an);*/
    //QVBoxLayout *vbx = new QVBoxLayout;

  /*  QFormLayout *fm = new QFormLayout;
    fm->addRow("Host",hst);
    fm->addRow("Port",pt);
    fm->addRow("Utilisateur",usr);
    fm->addRow("Mot de passe",psw);
    fm->setContentsMargins(400,250,300,200);
    vbx->addLayout(fm);
    //vbx->addLayout(hbx);
    setLayout(vbx);*/


    db.setHostName(""+ui->lineEdit->text());
    db.setPort(55553);
    db.setUserName(""+ui->lineEdit_3->text());
    db.setPassword(""+ui->lineEdit_4->text());
    db.setDatabaseName("gepharm");
   top = db.open();
}

Database::~Database()
{
    delete ui;
}

void Database::on_buttonBox_accepted()
{
    if(top)
    {
        QMessageBox::information(this,"satuts","Connection à la base de données réussie");
    }
    else {
        QMessageBox::critical(this,"Status","Echec de connection à la base");
    }

}
