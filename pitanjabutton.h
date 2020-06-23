#ifndef PITANJABUTTON_H
#define PITANJABUTTON_H

#include <QDialog>
#include "mainwindow.h"
#include "baza.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QPushButton>

namespace Ui {
class PitanjaButton;
}

class PitanjaButton : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase *base;
    baza *b;

    explicit PitanjaButton(QWidget *parent = nullptr);
    ~PitanjaButton();
    void pitanje4(QString p);
    void button19();
    void button20();
    void button21();
    void button23();
    void button24();

private:
    Ui::PitanjaButton *ui;
    QString TekstPitanja;
};

#endif // PITANJABUTTON_H
