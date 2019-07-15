#ifndef MAG_INVENT_H
#define MAG_INVENT_H

#include <QDialog>

namespace Ui {
class Mag_invent;
}

class Mag_invent : public QDialog
{
    Q_OBJECT

public:
    explicit Mag_invent(QWidget *parent = nullptr);
    ~Mag_invent();

private:
    Ui::Mag_invent *ui;
};

#endif // MAG_INVENT_H
