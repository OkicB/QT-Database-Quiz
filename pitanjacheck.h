#ifndef PITANJACHECK_H
#define PITANJACHECK_H

#include <QDialog>
#include <QObject>
#include "mainwindow.h"
#include "baza.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class PitanjaCheck;
}

class PitanjaCheck : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase *base;
    baza *b;

    explicit PitanjaCheck(QWidget *parent = nullptr);
    ~PitanjaCheck();
    void pitanje(QString p);
    void button1();
    void button4();
    void button8();
    void button11();
    void button13();
    void button7();
    void button17();
    void button18();
    void button22();
    void button25();
signals:
void tacnost(bool);

private:
    Ui::PitanjaCheck *ui;
    QString TekstPitanja;

};

#endif // PITANJACHECK_H
