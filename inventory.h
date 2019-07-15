#ifndef INVENTORY_H
#define INVENTORY_H

#include <QDialog>

namespace Ui {
class Inventory;
}

class Inventory : public QDialog
{
    Q_OBJECT

public:
    explicit Inventory(QWidget *parent = nullptr);
    ~Inventory();

private:
    Ui::Inventory *ui;
};

#endif // INVENTORY_H
