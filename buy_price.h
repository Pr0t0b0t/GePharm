#ifndef BUY_PRICE_H
#define BUY_PRICE_H

#include <QDialog>

namespace Ui {
class Buy_price;
}

class Buy_price : public QDialog
{
    Q_OBJECT

public:
    explicit Buy_price(QWidget *parent = nullptr);
    ~Buy_price();

private:
    Ui::Buy_price *ui;
};

#endif // BUY_PRICE_H
