#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <unordered_map>
#include<string>
#include<ui_plans.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; class Plans;}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_openMenuButton_clicked();

    void on_closeMenuButton_clicked();

private:
    Ui::Dialog *ui;
    Ui::Plans *plans;
    QPushButton* openMenuButton;
    std::unordered_map<std::string,QWidget*> allWidgets;

};
#endif // DIALOG_H
