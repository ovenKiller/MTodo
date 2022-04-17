#include "dialog.h"
#include "ui_dialog.h"
#include"ui_plans.h"
#include"plans.h"
#include<QWidget>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    Plans* newPlan = new Plans(ui->MyDayPage);
    openMenuButton = this->findChildren<QPushButton*>("openMenuButton").at(0);
    openMenuButton->setVisible(false);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_closeMenuButton_clicked()
{
    ui->MainMenu->setVisible(false);
    openMenuButton->setVisible(true);
}

void Dialog::on_openMenuButton_clicked()
{
    ui->MainMenu->setVisible(true);
    openMenuButton->setVisible(false);
}
