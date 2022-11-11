#ifndef ISSUETICKET_H
#define ISSUETICKET_H
#include "dbmanager.h"

#include <QDialog>

namespace Ui {
class issueTicket;
}

class issueTicket : public QDialog
{
    Q_OBJECT

public:
    explicit issueTicket(QWidget *parent = nullptr);
    ~issueTicket();

private slots:
    void on_confirmNewTicketBtn_clicked();

    void on_nameLE_textChanged(const QString &arg1);

    void on_nameLE_editingFinished();
    void on_surnameLE_editingFinished();

    void on_surnameLE_textChanged(const QString &arg1);

private:
    Ui::issueTicket *ui;
};

#endif
