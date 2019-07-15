#ifndef CONST_REPLEN_H
#define CONST_REPLEN_H

#include <QDialog>

namespace Ui {
class Const_replen;
}

class Const_replen : public QDialog
{
    Q_OBJECT

public:
    explicit Const_replen(QWidget *parent = nullptr);
    ~Const_replen();

private:
    Ui::Const_replen *ui;
};

#endif // CONST_REPLEN_H
