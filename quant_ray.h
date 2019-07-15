#ifndef QUANT_RAY_H
#define QUANT_RAY_H

#include <QDialog>

namespace Ui {
class Quant_ray;
}

class Quant_ray : public QDialog
{
    Q_OBJECT

public:
    explicit Quant_ray(QWidget *parent = nullptr);
    ~Quant_ray();

private:
    Ui::Quant_ray *ui;
};

#endif // QUANT_RAY_H
