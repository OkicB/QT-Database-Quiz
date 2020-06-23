#include "pregledpodataka.h"
#include "ui_pregledpodataka.h"

PregledPodataka::PregledPodataka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PregledPodataka)
{
    ui->setupUi(this);
    QSqlQueryModel *sqlModel= new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("select Ime, Prezime, Bodovi, Datum from STUDENTI");
    qry.exec();
    sqlModel->setQuery(qry);
    ui->tableView->setModel(sqlModel);
    //QDate::currentDate();
}

PregledPodataka::~PregledPodataka()
{
    delete ui;
}
