#ifndef PITANJARADIO_H
#define PITANJARADIO_H

#include <QDialog>
#include "mainwindow.h"
#include "baza.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class PitanjaRadio;
}

class PitanjaRadio : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase *base;
    baza *b;

    explicit PitanjaRadio(QWidget *parent = nullptr);
    ~PitanjaRadio();
    void pitanje2(QString p);
    void button2();
    void button3();
    void button5();
    void button6();
    void button9();

private slots:
    void on_pushButton_odgovor_clicked();

private:
    Ui::PitanjaRadio *ui;
    QString TekstPitanja;
};

#endif // PITANJARADIO_H
