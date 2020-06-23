#include "pitanjaradio.h"
#include "ui_pitanjaradio.h"

PitanjaRadio::PitanjaRadio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PitanjaRadio)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_odgovor, SIGNAL(clicked()), this, SLOT(close()));
}

PitanjaRadio::~PitanjaRadio()
{
    delete ui;
}

void PitanjaRadio::pitanje2(QString p)
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
    ui->label_pitanje2->setText(qry.value(0).toString());
    ui->radioButton_odgovor1->setText(qry.value(1).toString());
    ui->radioButton_odgovor2->setText(qry.value(2).toString());
    ui->radioButton_odgovor3->setText(qry.value(3).toString());
    ui->radioButton_odgovor4->setText(qry.value(4).toString());
    ui->radioButton_odgovor5->setText(qry.value(5).toString());
}

void PitanjaRadio::button2()
{
    if(ui->radioButton_odgovor2->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaRadio::button3()
{
    if(ui->radioButton_odgovor1->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaRadio::button5()
{
    if(ui->radioButton_odgovor3->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaRadio::button6()
{
    if(ui->radioButton_odgovor4->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaRadio::button9()
{
    if(ui->radioButton_odgovor2->isChecked()){
        QMessageBox::information(this, "Odgovor", "Tacan odgovor");
    }
    else{
        QMessageBox::information(this, "Odgovor", "Netacan odgovor");
    }
}

void PitanjaRadio::on_pushButton_odgovor_clicked()
{
    /*QSqlQuery qry;
    qry.prepare("SELECT TacanOdg1 FROM PITANJA WHERE RedniBroj= '"+TekstPitanja+"' ");
    qry.exec();
    qry.next();


    QString tacanOdg;
    tacanOdg = qry.value(0).toString();

    if(ui->radioButton_odgovor1->isChecked()) {
        if(ui->radioButton_odgovor1->text()==tacanOdg) MainWindow::trenutni->odgovorenoPitanje(true);
    }
    else if(ui->radioButton_odgovor2->isChecked())
    {
            if(ui->radioButton_2->text()==tacanOdg) MainWindow::trenutni->odgovorenoPitanje(true);
        }
    else if(ui->radioButton_odgovor3->isChecked())
    {
            if(ui->radioButton_3->text()==tacanOdg) MainWindow::trenutni->odgovorenoPitanje(true);
        }
    else if(ui->radioButton_odgovor4->isChecked())
    {
            if(ui->radioButton_4->text()==tacanOdg) MainWindow::trenutni->odgovorenoPitanje(true);
        }
    else if(ui->radioButton_odgovor5->isChecked())
    {
            if(ui->radioButton_5->text()==tacanOdg) MainWindow::trenutni->odgovorenoPitanje(true);
    }*/
}
