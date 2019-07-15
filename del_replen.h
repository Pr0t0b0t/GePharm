#ifndef DEL_REPLEN_H
#define DEL_REPLEN_H

#include <QDialog>

namespace Ui {
class Del_replen;
}

class Del_replen : public QDialog
{
    Q_OBJECT

public:
    explicit Del_replen(QWidget *parent = nullptr);
    ~Del_replen();

private:
    Ui::Del_replen *ui;
};

#endif // DEL_REPLEN_H
