#ifndef CLOSE_DAY_H
#define CLOSE_DAY_H

#include <QDialog>

namespace Ui {
class Close_day;
}

class Close_day : public QDialog
{
    Q_OBJECT

public:
    explicit Close_day(QWidget *parent = nullptr);
    ~Close_day();

private:
    Ui::Close_day *ui;
};

#endif // CLOSE_DAY_H
