#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include "mainwindow.h"
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    QString korisnik, sifra;

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_prijava_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
