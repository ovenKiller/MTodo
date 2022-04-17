#include "plans.h"
#include "ui_plans.h"

Plans::Plans(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Plans)
{
    ui->setupUi(this);
}

Plans::~Plans()
{
    delete ui;
}
