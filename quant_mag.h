#ifndef QUANT_MAG_H
#define QUANT_MAG_H

#include <QDialog>

namespace Ui {
class Quant_mag;
}

class Quant_mag : public QDialog
{
    Q_OBJECT

public:
    explicit Quant_mag(QWidget *parent = nullptr);
    ~Quant_mag();

private:
    Ui::Quant_mag *ui;
};

#endif // QUANT_MAG_H
