#ifndef SAV_SALE_H
#define SAV_SALE_H

#include <QDialog>
#include <QTableView>

namespace Ui {
class Sav_sale;
}

class Sav_sale : public QDialog
{
    Q_OBJECT

public:
    explicit Sav_sale(QWidget *parent = nullptr);
    ~Sav_sale();

private:
    Ui::Sav_sale *ui;
};

#endif // SAV_SALE_H
