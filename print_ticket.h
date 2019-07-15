#ifndef PRINT_TICKET_H
#define PRINT_TICKET_H

#include <QDialog>

namespace Ui {
class Print_ticket;
}

class Print_ticket : public QDialog
{
    Q_OBJECT

public:
    explicit Print_ticket(QWidget *parent = nullptr);
    ~Print_ticket();

private:
    Ui::Print_ticket *ui;
};

#endif // PRINT_TICKET_H
