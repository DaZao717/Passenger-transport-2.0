#ifndef DETAILEDINFO_H
#define DETAILEDINFO_H

#include <QDialog>
#include "passenger_bus_day.h"
#include <QDebug>
#include "morepassenger.h"
#include <QMessageBox>
#include <QFile>
#include <QMainWindow>
#include "search_pass.h"

namespace Ui {
class detailedinfo;
}

class detailedinfo : public QDialog
{
    Q_OBJECT

public:
    explicit detailedinfo(QWidget *parent = nullptr);
    ~detailedinfo();
    bus* nw;
    search_pass* sp;

    void insert_row(int count);
    void re_fresh();
    void  stress(int n);

signals:
    void end();

private slots:
    void on_buyButton_clicked();

    void receive_from_sp(QString a_name, QString a_ID)
    {
        if(a_name.isEmpty() && a_ID.isEmpty())
            return;
        else if(!a_name.isEmpty() && a_ID.isEmpty())
        {
            for(int i = 0 ; i < nw->zuowei; i ++)
            {
                if(nw->pass_list[i].name == a_name)
                {
                    stress(i);
                    return;
                }
            }
        }
        else if(a_name.isEmpty() &&  !a_ID.isEmpty())
        {
            for (int i = 0 ; i <nw->zuowei; i ++)
            {
                if(nw->pass_list[i].ID == a_ID)
                {
                    stress(i);
                    return;
                }
            }
        }
        else
        {
            for(int i = 0 ; i < nw->zuowei; i ++)
            {
                if(nw->pass_list[i].name == a_name && nw->pass_list[i].ID == a_ID)
                {
                    stress(i);
                    return;
                }
            }
        }

        QMessageBox::critical(this, tr("警告"),  tr("查无此人"));
    }

    void receive_from_mp(QString a_name, QString a_ID, int a_zuowei)
    {
        if(a_name.isEmpty() || a_ID.isEmpty())
        {
            return;
        }
        if(a_zuowei == -1)
        {
            for(int i = 0 ; i < nw->zuowei; i ++)
            {
                if(nw->pass_list[i].name.isEmpty())
                {
                    a_zuowei = i + 1;
                    nw->pass_list[i].name = a_name;
                    nw->pass_list[i].ID = a_ID;
                    nw->yishou ++;
                    mp->close();
                    break;
                }
            }
        }
        else{
            if(nw->pass_list[a_zuowei - 1].name.isEmpty())
            {
                nw->pass_list[a_zuowei - 1].name = a_name;
                nw->pass_list[a_zuowei - 1].ID = a_ID;
                nw->yishou ++;
                mp->close();
            }
            else
            {
                QMessageBox::critical(this, tr("警告"),  tr("改座位已有人\n请重新选择"));
            }
        }
        re_fresh();
        stress(a_zuowei - 1);
    }

    void on_tuiButton_clicked();

    void on_okButton_clicked();

    void on_printButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::detailedinfo *ui;
    morepassenger* mp;
};

#endif // DETAILEDINFO_H
