#ifndef PREGLEDPODATAKA_H
#define PREGLEDPODATAKA_H

#include <QDialog>
#include "mainwindow.h"
#include "baza.h"
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class PregledPodataka;
}

class PregledPodataka : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase *base;
    baza *b;

public:
    explicit PregledPodataka(QWidget *parent = nullptr);
    ~PregledPodataka();

private:
    Ui::PregledPodataka *ui;
};

#endif // PREGLEDPODATAKA_H
