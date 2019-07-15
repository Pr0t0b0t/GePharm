#ifndef SALE_HISTORY_H
#define SALE_HISTORY_H

#include <QDialog>

namespace Ui {
class Sale_history;
}

class Sale_history : public QDialog
{
    Q_OBJECT

public:
    explicit Sale_history(QWidget *parent = nullptr);
    ~Sale_history();

private:
    Ui::Sale_history *ui;
};

#endif // SALE_HISTORY_H
