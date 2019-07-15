#ifndef NEW_PROD_H
#define NEW_PROD_H

#include <QDialog>

namespace Ui {
class New_prod;
}

class New_prod : public QDialog
{
    Q_OBJECT

public:
    explicit New_prod(QWidget *parent = nullptr);
    ~New_prod();

private:
    Ui::New_prod *ui;
};

#endif // NEW_PROD_H
