#include "pass_cmd.h"
#include "ui_pass_cmd.h"

Pass_cmd::Pass_cmd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pass_cmd)
{
    ui->setupUi(this);
    setWindowTitle("Passer une commande");
    setFixedSize(720,640);
}

Pass_cmd::~Pass_cmd()
{
    delete ui;
}
