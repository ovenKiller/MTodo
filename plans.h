#ifndef PLANS_H
#define PLANS_H

#include <QWidget>

namespace Ui {
class Plans;
}

class Plans : public QWidget
{
    Q_OBJECT

public:
    explicit Plans(QWidget *parent = nullptr);
    int getId(){
        return id;
    }
    ~Plans();

private:
    int id;
    int setId(int newid){
        id = newid;
        return 0;
    }
    Ui::Plans *ui;
};

#endif // PLANS_H
