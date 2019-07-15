#ifndef INV_N_STOCK_H
#define INV_N_STOCK_H

#include <QDialog>

namespace Ui {
class Inv_n_stock;
}

class Inv_n_stock : public QDialog
{
    Q_OBJECT

public:
    explicit Inv_n_stock(QWidget *parent = nullptr);
    ~Inv_n_stock();

private:
    Ui::Inv_n_stock *ui;
};

#endif // INV_N_STOCK_H
