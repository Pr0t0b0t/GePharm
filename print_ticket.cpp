#include "print_ticket.h"
#include "ui_print_ticket.h"

Print_ticket::Print_ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Print_ticket)
{
    ui->setupUi(this);
    setWindowTitle("Imprimer un ticket");
    setFixedSize(720,640);
}

Print_ticket::~Print_ticket()
{
    delete ui;
}
