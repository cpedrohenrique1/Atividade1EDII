#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "conjunto.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Gerar_clicked()
{
    try {
        if (ui->lineEdit_inputTamanho->text().isEmpty() || ui->lineEdit_inputTamanho->text().toInt() <= 0)
        {
            throw QString("dado invalido");
        }
        Conjunto conj(ui->lineEdit_inputTamanho->text().toInt());
        ui->textEdit_saida->setText(conj.getConjunto());
    } catch (QString &e) {
        QMessageBox::critical(this,"Erro", e);
    }
}

