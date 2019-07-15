#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSql>
#include <QLineEdit>
#include <QFormLayout>
#include <QSqlTableModel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>

namespace Ui {
class Database;
}

class Database : public QDialog
{
    Q_OBJECT

public:
    explicit Database(QWidget *parent = nullptr);
    ~Database();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Database *ui;
     QPushButton *ok, *an;
      QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
       bool top;
};

#endif // DATABASE_H
