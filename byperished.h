#ifndef BYPERISHED_H
#define BYPERISHED_H

#include <QDialog>

namespace Ui {
class Byperished;
}

class Byperished : public QDialog
{
    Q_OBJECT

public:
    explicit Byperished(QWidget *parent = nullptr);
    ~Byperished();

private:
    Ui::Byperished *ui;
};

#endif // BYPERISHED_H
