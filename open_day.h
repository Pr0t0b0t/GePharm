#ifndef OPEN_DAY_H
#define OPEN_DAY_H

#include <QDialog>
#include <QDateEdit>
#include <QLabel>

namespace Ui {
class Open_day;
}

class Open_day : public QDialog
{
    Q_OBJECT

public:
    explicit Open_day(QWidget *parent = nullptr);
    ~Open_day();

private:
    Ui::Open_day *ui;
};

#endif // OPEN_DAY_H
