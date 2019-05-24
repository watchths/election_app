#ifndef DIALOG_ADMIN_H
#define DIALOG_ADMIN_H

#include <QDialog>
#include <QTableWidgetItem>
#include <user.h>
#include <mainwindow.h>

namespace Ui {
class Dialog_admin;
}

class Dialog_admin : public QDialog
{
    Q_OBJECT

public :
    int total_jp,total_np,total_nsy,total_settle,total_user;

public:
    explicit Dialog_admin(QWidget *parent = nullptr);
    ~Dialog_admin();

private slots:
    void on_pushButton_show_clicked();
    void insertDataToTable(QList<UserData> listUserData);
    QList<UserData> GetUserData();
    void setHeaderTable();

private:
    Ui::Dialog_admin *ui;
};

#endif // DIALOG_ADMIN_H
