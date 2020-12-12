#ifndef RECIPE_H
#define RECIPE_H

#include <QMainWindow>

#include "database.h"
#include "singleView.h"

namespace Ui {
class recipe;
}

class recipe : public QMainWindow
{
    Q_OBJECT

public:
    explicit recipe(QWidget *parent = nullptr);
    ~recipe();

private slots:
    void on_popButton_clicked();
    void on_table_clicked(const QModelIndex &index);
    void on_pushButton_clicked();

private:
    Ui::recipe *ui;
    QSqlDatabase db;

    singleView *single;
    bool clicked;

    // Strategy Pattern implementation 1 and 2
    void displayTop();
    void displayAll();
};

#endif // RECIPE_H
