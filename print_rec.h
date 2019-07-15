#ifndef PRINT_REC_H
#define PRINT_REC_H

#include <QDialog>

namespace Ui {
class Print_rec;
}

class Print_rec : public QDialog
{
    Q_OBJECT

public:
    explicit Print_rec(QWidget *parent = nullptr);
    ~Print_rec();

private:
    Ui::Print_rec *ui;
};

#endif // PRINT_REC_H
