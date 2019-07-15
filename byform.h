#ifndef BYFORM_H
#define BYFORM_H

#include <QDialog>

namespace Ui {
class Byform;
}

class Byform : public QDialog
{
    Q_OBJECT

public:
    explicit Byform(QWidget *parent = nullptr);
    ~Byform();

private:
    Ui::Byform *ui;
};

#endif // BYFORM_H
