#ifndef BAZA_H
#define BAZA_H

#include <QSqlDatabase>

class baza
{
public:
    baza();
    QSqlDatabase mydb;

    bool bazaOtvorena(){
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/SE/Desktop/ZavrsniOP/FinalniIspit/KVIZ.db");
        if (mydb.open()){return true;}
        else {return false;}
    }
    QSqlDatabase* b();
};

#endif // BAZA_H
