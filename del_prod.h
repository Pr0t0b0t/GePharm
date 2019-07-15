#ifndef DEL_PROD_H
#define DEL_PROD_H

#include <QDialog>

namespace Ui {
class Del_prod;
}

class Del_prod : public QDialog
{
    Q_OBJECT

public:
    explicit Del_prod(QWidget *parent = nullptr);
    ~Del_prod();

private:
    Ui::Del_prod *ui;
};

#endif // DEL_PROD_H
