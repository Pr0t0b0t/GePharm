#ifndef BROKEN_P_H
#define BROKEN_P_H

#include <QDialog>

namespace Ui {
class Broken_p;
}

class Broken_p : public QDialog
{
    Q_OBJECT

public:
    explicit Broken_p(QWidget *parent = nullptr);
    ~Broken_p();

private:
    Ui::Broken_p *ui;
};

#endif // BROKEN_P_H
