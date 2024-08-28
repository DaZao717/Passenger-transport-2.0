#include "search_pass.h"
#include "ui_search_pass.h"

search_pass::search_pass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::search_pass)
{
    ui->setupUi(this);
}

search_pass::~search_pass()
{
    delete ui;
}

void search_pass::on_okButton_clicked()
{
    QString a_name,a_ID;
    a_name = ui->getname->text();
    a_ID = ui->getID->text();
    from_sp(a_name,a_ID);
    this->close();
}

