#ifndef PROVIDER_LIST_H
#define PROVIDER_LIST_H

#include <QDialog>

namespace Ui {
class Provider_list;
}

class Provider_list : public QDialog
{
    Q_OBJECT

public:
    explicit Provider_list(QWidget *parent = nullptr);
    ~Provider_list();

private:
    Ui::Provider_list *ui;
};

#endif // PROVIDER_LIST_H
