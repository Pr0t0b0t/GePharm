#ifndef DISALLP_H
#define DISALLP_H

#include <QDialog>

namespace Ui {
class Disallp;
}

class Disallp : public QDialog
{
    Q_OBJECT

public:
    explicit Disallp(QWidget *parent = nullptr);
    ~Disallp();

private:
    Ui::Disallp *ui;
};

#endif // DISALLP_H
