#ifndef NEW_PROVIDER_H
#define NEW_PROVIDER_H

#include <QDialog>

namespace Ui {
class New_provider;
}

class New_provider : public QDialog
{
    Q_OBJECT

public:
    explicit New_provider(QWidget *parent = nullptr);
    ~New_provider();

private:
    Ui::New_provider *ui;
};

#endif // NEW_PROVIDER_H
