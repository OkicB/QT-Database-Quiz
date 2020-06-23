#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "QMessageBox"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_prijava_clicked()
{
    QString korisnik, sifra;
    korisnik=ui->lineEdit_ime->text();
    sifra=ui->lineEdit_sifra->text();

    QSqlQuery qry;

    if(qry.exec("select * from STUDENTI where KorisnickoIme='"+korisnik+"'and Sifra='"+sifra+"'")){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1) {
            ui->status->setText("Korisnicko ime i sifra su tacni");
            QMessageBox::information(this, "Login", "Uspjesno ste prijavljeni");
            qry.prepare("update STUDENTI set Datum=:Datum where KorisnickoIme=:KorisnickoIme");
            qry.bindValue(":Datum", QDate::currentDate());
            qry.bindValue(":KorisnickoIme", korisnik);
            qry.prepare("update STUDENTI set Bodovi=:Bodovi where KorisnickoIme=:KorisnickoIme");
            qry.bindValue(":Bodovi", 0);
            qry.bindValue(":KorisnickoIme", korisnik);
            qry.exec();
            hide();
        }


        if(count<1) {
        ui->status->setText("Korisnicko ime i sifra su netacni");
        QMessageBox::information(this, "Login", "Korisnicko ime i sifra su netacni");
        }
        }
}
