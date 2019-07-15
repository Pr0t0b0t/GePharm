#ifndef ACTIV_SG_H
#define ACTIV_SG_H

#include <QDialog>
#include <QDateEdit>
#include <QFormLayout>
#include <QCheckBox>

namespace Ui {
class Activ_sg;
}

class Activ_sg : public QDialog
{
    Q_OBJECT

public:
    explicit Activ_sg(QWidget *parent = nullptr);
    ~Activ_sg();

private:
    Ui::Activ_sg *ui;
};

#endif // ACTIV_SG_H
