#ifndef SINGLEVIEW_H
#define SINGLEVIEW_H

#include <QDialog>
#include <QCloseEvent>
#include <QCheckBox>
#include <QSqlRecord>
#include <QPixmap>
#include <QSqlField>
#include "logindb.h"

namespace Ui {
class singleView;
}

class singleView : public QDialog
{
    Q_OBJECT

public:
    explicit singleView(QWidget *parent = nullptr);
    ~singleView();

    void setName(QString);
private slots:
    void on_cancel_clicked();
private:
    Ui::singleView *ui;
    QSqlDatabase db;
    QString name;
    QString email;
    bool preCheck;
    bool postCheck;

    void displayAll();
};

#endif // SINGLEVIEW_H
