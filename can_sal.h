#ifndef CAN_SAL_H
#define CAN_SAL_H

#include <QDialog>

namespace Ui {
class Can_sal;
}

class Can_sal : public QDialog
{
    Q_OBJECT

public:
    explicit Can_sal(QWidget *parent = nullptr);
    ~Can_sal();

private:
    Ui::Can_sal *ui;
};

#endif // CAN_SAL_H
