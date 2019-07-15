#ifndef DESACT_SG_H
#define DESACT_SG_H

#include <QDialog>

namespace Ui {
class Desact_sg;
}

class Desact_sg : public QDialog
{
    Q_OBJECT

public:
    explicit Desact_sg(QWidget *parent = nullptr);
    ~Desact_sg();

private:
    Ui::Desact_sg *ui;
};

#endif // DESACT_SG_H
