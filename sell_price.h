#ifndef SELL_PRICE_H
#define SELL_PRICE_H

#include <QDialog>

namespace Ui {
class Sell_price;
}

class Sell_price : public QDialog
{
    Q_OBJECT

public:
    explicit Sell_price(QWidget *parent = nullptr);
    ~Sell_price();

private:
    Ui::Sell_price *ui;
};

#endif // SELL_PRICE_H
