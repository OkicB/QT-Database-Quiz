#include "pitanjacheck.h"
#include "ui_pitanjacheck.h"
#include <QMessageBox>

PitanjaCheck::PitanjaCheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PitanjaCheck)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_odgovor, SIGNAL(clicked()), this, SLOT(hide()));
}

PitanjaCheck::~PitanjaCheck()
{
    delete ui;
}

void PitanjaCheck::pitanje(QString p)
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
    ui->label_pitanja->setText(qry.value(0).toString());
    ui->checkBox_odgovor1->setText(qry.value(1).toString());
    ui->checkBox_odgovor2->setText(qry.value(2).toString());
    ui->checkBox_odgovor3->setText(qry.value(3).toString());
    ui->checkBox_odgovor4->setText(qry.value(4).toString());
    ui->checkBox_odgovor5->setText(qry.value(5).toString());
}

void PitanjaCheck::button1()
{
    if(ui->checkBox_odgovor3->isChecked() && ui->checkBox_odgovor5->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button4()
{
    if(ui->checkBox_odgovor2->isChecked() && ui->checkBox_odgovor5->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button8()
{
    if(ui->checkBox_odgovor1->isChecked() && ui->checkBox_odgovor5->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button11()
{
    if(ui->checkBox_odgovor1->isChecked() && ui->checkBox_odgovor4->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button13()
{
    if(ui->checkBox_odgovor3->isChecked() && ui->checkBox_odgovor4->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button7()
{
    if(ui->checkBox_odgovor2->isChecked() && ui->checkBox_odgovor3->isChecked() && ui->checkBox_odgovor5->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button17()
{
    if(ui->checkBox_odgovor1->isChecked() && ui->checkBox_odgovor3->isChecked() && ui->checkBox_odgovor4->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button18()
{
    if(ui->checkBox_odgovor2->isChecked() && ui->checkBox_odgovor3->isChecked() && ui->checkBox_odgovor5->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button22()
{
    if(ui->checkBox_odgovor3->isChecked() && ui->checkBox_odgovor4->isChecked() && ui->checkBox_odgovor5->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaCheck::button25()
{
    if(ui->checkBox_odgovor1->isChecked() && ui->checkBox_odgovor2->isChecked() && ui->checkBox_odgovor3->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

/*void PitanjaCheck::on_pushButton_odgovor_clicked()
{

}*/
