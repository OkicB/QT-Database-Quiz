#include "pitanjacombo.h"
#include "ui_pitanjacombo.h"

PitanjaCombo::PitanjaCombo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PitanjaCombo)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_odgovor, SIGNAL(clicked()), this, SLOT(close()));
}

PitanjaCombo::~PitanjaCombo()
{
    delete ui;
}

void PitanjaCombo::pitanje3(QString p)
{
    TekstPitanja = p;
    Odgovor1 = p;
    Odgovor2 = p;
    Odgovor3 = p;
    Odgovor4 = p;
    Odgovor5 = p;
    b = new baza;

    if(b->bazaOtvorena()==true){
    qDebug()<<"Baza je otvorena." ;
    }

    QSqlQueryModel *sqlModel= new QSqlQueryModel();
    QSqlQuery qry;
    QSqlQuery qry2;
    /*QSqlQuery qry3;
    QSqlQuery qry4;
    QSqlQuery qry5;
    QSqlQuery qry6;*/
    qry.prepare("select TekstPitanja, Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 from PITANJA where RedniBroj='"+TekstPitanja+"' ");
    qry.exec();
    qry.next();
    ui->label_pitanja3->setText(qry.value(0).toString());
    qry.prepare("select Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 from PITANJA where RedniBroj='"+Odgovor1+"' ");
    qry.exec();
    //qry.next();
    sqlModel->setQuery(qry);
    ui->comboBox->setModel(sqlModel);
    qry.prepare("select Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 from PITANJA where RedniBroj='"+Odgovor2+"' ");
    qry.exec();
    //qry2.next();
    sqlModel->setQuery(qry);
    ui->comboBox->setModel(sqlModel);
    /*qry.prepare("select Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 from PITANJA where RedniBroj='"+Odgovor3+"' ");
    qry.exec();
    qry.next();
    sqlModel->setQuery(qry);
    ui->comboBox->setModel(sqlModel);
    qry.prepare("select Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 from PITANJA where RedniBroj='"+Odgovor4+"' ");
    qry.exec();
    qry.next();
    sqlModel->setQuery(qry);
    ui->comboBox->setModel(sqlModel);
    qry.prepare("select Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 from PITANJA where RedniBroj='"+Odgovor5+"' ");
    qry.exec();
    qry.next();
    sqlModel->setQuery(qry);
    ui->comboBox->setModel(sqlModel);*/
}
