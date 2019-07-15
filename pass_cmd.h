#ifndef PASS_CMD_H
#define PASS_CMD_H

#include <QDialog>

namespace Ui {
class Pass_cmd;
}

class Pass_cmd : public QDialog
{
    Q_OBJECT

public:
    explicit Pass_cmd(QWidget *parent = nullptr);
    ~Pass_cmd();

private:
    Ui::Pass_cmd *ui;
};

#endif // PASS_CMD_H
