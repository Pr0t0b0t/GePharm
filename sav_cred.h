#ifndef SAV_CRED_H
#define SAV_CRED_H

#include <QDialog>

namespace Ui {
class Sav_cred;
}

class Sav_cred : public QDialog
{
    Q_OBJECT

public:
    explicit Sav_cred(QWidget *parent = nullptr);
    ~Sav_cred();

private:
    Ui::Sav_cred *ui;
};

#endif // SAV_CRED_H
