#ifndef SAVEP_SAL_H
#define SAVEP_SAL_H

#include <QDialog>

namespace Ui {
class Savep_sal;
}

class Savep_sal : public QDialog
{
    Q_OBJECT

public:
    explicit Savep_sal(QWidget *parent = nullptr);
    ~Savep_sal();

private:
    Ui::Savep_sal *ui;
};

#endif // SAVEP_SAL_H
