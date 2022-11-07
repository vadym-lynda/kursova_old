#ifndef ISSUETICKET_H
#define ISSUETICKET_H

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

private:
    Ui::issueTicket *ui;
};

#endif // ISSUETICKET_H
