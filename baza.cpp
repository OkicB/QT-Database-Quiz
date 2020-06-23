#include "baza.h"
#include <QDebug>

baza::baza()
{

}
QSqlDatabase* baza::b()
{
    if(bazaOtvorena()==true) return &mydb;
    else qDebug()<<"Baza nije otvorena.";
    return 0;
}
