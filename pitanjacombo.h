#ifndef PITANJACOMBO_H
#define PITANJACOMBO_H

#include <QDialog>
#include "mainwindow.h"
#include "baza.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>

namespace Ui {
class PitanjaCombo;
}

class PitanjaCombo : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase *base;
    baza *b;

    explicit PitanjaCombo(QWidget *parent = nullptr);
    ~PitanjaCombo();
    void pitanje3(QString p);

private:
    Ui::PitanjaCombo *ui;
    QString TekstPitanja;
    QString Odgovor1;
    QString Odgovor2;
    QString Odgovor3;
    QString Odgovor4;
    QString Odgovor5;
};

#endif // PITANJACOMBO_H
