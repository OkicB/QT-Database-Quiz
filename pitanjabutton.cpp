#include "pitanjabutton.h"
#include "ui_pitanjabutton.h"

PitanjaButton::PitanjaButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PitanjaButton)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_odgovor, SIGNAL(clicked()), this, SLOT(close()));
}

PitanjaButton::~PitanjaButton()
{
    delete ui;
}

void PitanjaButton::pitanje4(QString p)
{
    TekstPitanja = p;
    b = new baza;

    if(b->bazaOtvorena()==true){
    qDebug()<<"Baza je otvorena." ;
    }

    QSqlQuery qry;
    qry.prepare("select TekstPitanja, Odgovor1, Odgovor2, Odgovor3, Odgovor4, Odgovor5 from PITANJA where RedniBroj='"+TekstPitanja+"' ");
    qry.exec();
    qry.next();
    ui->label_pitanje4->setText(qry.value(0).toString());
    ui->pushButton_odgovor1->setText(qry.value(1).toString());
    ui->pushButton_odgovor2->setText(qry.value(2).toString());
    ui->pushButton_odgovor3->setText(qry.value(3).toString());
    ui->pushButton_odgovor4->setText(qry.value(4).toString());
    ui->pushButton_odgovor5->setText(qry.value(5).toString());
}

void PitanjaButton::button19()
{
    if(ui->pushButton_odgovor2->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaButton::button20()
{
    if(ui->pushButton_odgovor3->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaButton::button21()
{
    if(ui->pushButton_odgovor4->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaButton::button23()
{
    if(ui->pushButton_odgovor3->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaButton::button24()
{
    if(ui->pushButton_odgovor1->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}
