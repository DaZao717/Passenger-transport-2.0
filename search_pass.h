#ifndef SEARCH_PASS_H
#define SEARCH_PASS_H

#include <QDialog>

namespace Ui {
class search_pass;
}

class search_pass : public QDialog
{
    Q_OBJECT

public:
    explicit search_pass(QWidget *parent = nullptr);
    ~search_pass();

signals:
    void from_sp(QString a_name, QString a_ID);

private slots:
    void on_okButton_clicked();

private:
    Ui::search_pass *ui;
};

#endif // SEARCH_PASS_H
