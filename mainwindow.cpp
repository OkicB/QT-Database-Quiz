#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    b = new baza();
    if(!b->bazaOtvorena()){
        ui->statusbar->showMessage("Niste konektovani na bazu");
    }
    else {
        ui->statusbar->showMessage("Baza podataka je otvorena");
    }
    disableButton();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionLogin_triggered()
{
    Login logIn;
    logIn.show();
    if(logIn.exec()){
        if(logIn.isHidden()){
            enableButton();
        }
    }
    return enableButton();
}

void MainWindow::disableButton()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->pushButton_19->setEnabled(false);
    ui->pushButton_20->setEnabled(false);
    ui->pushButton_21->setEnabled(false);
    ui->pushButton_22->setEnabled(false);
    ui->pushButton_23->setEnabled(false);
    ui->pushButton_24->setEnabled(false);
    ui->pushButton_25->setEnabled(false);
}

void MainWindow::enableButton()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_14->setEnabled(true);
    ui->pushButton_15->setEnabled(true);
    ui->pushButton_16->setEnabled(true);
    ui->pushButton_17->setEnabled(true);
    ui->pushButton_18->setEnabled(true);
    ui->pushButton_19->setEnabled(true);
    ui->pushButton_20->setEnabled(true);
    ui->pushButton_21->setEnabled(true);
    ui->pushButton_22->setEnabled(true);
    ui->pushButton_23->setEnabled(true);
    ui->pushButton_24->setEnabled(true);
    ui->pushButton_25->setEnabled(true);
}


//pitanja sa check box
void MainWindow::on_pushButton_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("1");
    pitanja->exec();
    pitanja->button1();
    ui->pushButton->setEnabled(false);
}

void MainWindow::on_pushButton_4_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("4");
    pitanja->exec();
    pitanja->button4();
    ui->pushButton_4->setEnabled(false);
}

void MainWindow::on_pushButton_8_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("8");
    pitanja->exec();
    pitanja->button8();
    ui->pushButton_8->setEnabled(false);
}

void MainWindow::on_pushButton_11_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("11");
    pitanja->exec();
    pitanja->button11();
    ui->pushButton_11->setEnabled(false);
}

void MainWindow::on_pushButton_13_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("13");
    pitanja->exec();
    pitanja->button13();
    ui->pushButton_13->setEnabled(false);
}

void MainWindow::on_pushButton_7_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("7");
    pitanja->exec();
    pitanja->button7();
    ui->pushButton_7->setEnabled(false);
}

void MainWindow::on_pushButton_17_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("17");
    pitanja->exec();
    pitanja->button17();
    ui->pushButton_17->setEnabled(false);
}

void MainWindow::on_pushButton_18_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("18");
    pitanja->exec();
    pitanja->button18();
    ui->pushButton_18->setEnabled(false);
}

void MainWindow::on_pushButton_22_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("22");
    pitanja->exec();
    pitanja->button22();
    ui->pushButton_22->setEnabled(false);
}

void MainWindow::on_pushButton_25_clicked()
{
    PitanjaCheck *pitanja;
    pitanja= new PitanjaCheck(this);
    pitanja->pitanje("25");
    pitanja->exec();
    pitanja->button25();
    ui->pushButton_25->setEnabled(false);
}


//pitanja sa radio buttonom
void MainWindow::on_pushButton_2_clicked()
{
    PitanjaRadio *pitanjaRadio;
    pitanjaRadio= new PitanjaRadio(this);
    pitanjaRadio->pitanje2("2");
    pitanjaRadio->exec();
    pitanjaRadio->button2();
    ui->pushButton_2->setEnabled(false);
}

void MainWindow::on_pushButton_3_clicked()
{
    PitanjaRadio *pitanjaRadio;
    pitanjaRadio= new PitanjaRadio(this);
    pitanjaRadio->pitanje2("3");
    pitanjaRadio->exec();
    pitanjaRadio->button3();
    ui->pushButton_3->setEnabled(false);
}

void MainWindow::on_pushButton_5_clicked()
{
    PitanjaRadio *pitanjaRadio;
    pitanjaRadio= new PitanjaRadio(this);
    pitanjaRadio->pitanje2("5");
    pitanjaRadio->exec();
    pitanjaRadio->button5();
    ui->pushButton_5->setEnabled(false);
}

void MainWindow::on_pushButton_6_clicked()
{
    PitanjaRadio *pitanjaRadio;
    pitanjaRadio= new PitanjaRadio(this);
    pitanjaRadio->pitanje2("6");
    pitanjaRadio->exec();
    pitanjaRadio->button6();
    ui->pushButton_6->setEnabled(false);
}

void MainWindow::on_pushButton_9_clicked()
{
    PitanjaRadio *pitanjaRadio;
    pitanjaRadio= new PitanjaRadio(this);
    pitanjaRadio->pitanje2("9");
    pitanjaRadio->exec();
    pitanjaRadio->button9();
    ui->pushButton_9->setEnabled(false);
}


//pitanja sa push buttonom
void MainWindow::on_pushButton_19_clicked()
{
    PitanjaButton *pitanjaButton;
    pitanjaButton= new PitanjaButton(this);
    pitanjaButton->pitanje4("19");
    pitanjaButton->exec();
    pitanjaButton->button19();
    //ui->pushButton_19->setEnabled(false);
}

void MainWindow::on_pushButton_20_clicked()
{
    PitanjaButton *pitanjaButton;
    pitanjaButton= new PitanjaButton(this);
    pitanjaButton->pitanje4("20");
    pitanjaButton->exec();
    pitanjaButton->button20();
    ui->pushButton_20->setEnabled(false);
}

void MainWindow::on_pushButton_21_clicked()
{
    PitanjaButton *pitanjaButton;
    pitanjaButton= new PitanjaButton(this);
    pitanjaButton->pitanje4("21");
    pitanjaButton->exec();
    pitanjaButton->button21();
    ui->pushButton_21->setEnabled(false);
}

void MainWindow::on_pushButton_23_clicked()
{
    PitanjaButton *pitanjaButton;
    pitanjaButton= new PitanjaButton(this);
    pitanjaButton->pitanje4("23");
    pitanjaButton->exec();
    pitanjaButton->button23();
    ui->pushButton_23->setEnabled(false);
}

void MainWindow::on_pushButton_24_clicked()
{
    PitanjaButton *pitanjaButton;
    pitanjaButton= new PitanjaButton(this);
    pitanjaButton->pitanje4("24");
    pitanjaButton->exec();
    pitanjaButton->button24();
    ui->pushButton_24->setEnabled(false);
}

void MainWindow::on_actionPregled_triggered()
{
    PregledPodataka pregled;
    pregled.show();
    pregled.exec();
}


//pitanja sa combo box
void MainWindow::on_pushButton_10_clicked()
{
    PitanjaCombo *pitanjaCombo;
    pitanjaCombo= new PitanjaCombo(this);
    pitanjaCombo->pitanje3("10");
    pitanjaCombo->exec();
    ui->pushButton_10->setEnabled(false);
}

void MainWindow::on_pushButton_12_clicked()
{
    PitanjaCombo *pitanjaCombo;
    pitanjaCombo= new PitanjaCombo(this);
    pitanjaCombo->pitanje3("12");
    pitanjaCombo->exec();
    ui->pushButton_12->setEnabled(false);
}

void MainWindow::on_pushButton_14_clicked()
{
    PitanjaCombo *pitanjaCombo;
    pitanjaCombo= new PitanjaCombo(this);
    pitanjaCombo->pitanje3("14");
    pitanjaCombo->exec();
    ui->pushButton_14->setEnabled(false);
}

void MainWindow::on_pushButton_15_clicked()
{
    PitanjaCombo *pitanjaCombo;
    pitanjaCombo= new PitanjaCombo(this);
    pitanjaCombo->pitanje3("15");
    pitanjaCombo->exec();
    ui->pushButton_15->setEnabled(false);
}

void MainWindow::on_pushButton_16_clicked()
{
    PitanjaCombo *pitanjaCombo;
    pitanjaCombo= new PitanjaCombo(this);
    pitanjaCombo->pitanje3("16");
    pitanjaCombo->exec();
    ui->pushButton_16->setEnabled(false);
}
