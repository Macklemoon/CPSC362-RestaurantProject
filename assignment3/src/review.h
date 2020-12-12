#ifndef REVIEW_H
#define REVIEW_H

#include <QMainWindow>

#include "database.h"
namespace Ui {
class review;
}

class review : public QMainWindow
{
    Q_OBJECT

public:
    explicit review(QWidget *parent = nullptr);
    ~review();

private slots:
    void on_table_clicked(const QModelIndex &index);

    void on_horizontalSlider_sliderMoved(int position);

    void on_cancel_clicked();

private:
    Ui::review *ui;
    QSqlDatabase db;
    // Strategy Pattern implementation 1 and 2
    void displayAll();
    void displayFilter(int);
};

#endif // REVIEW_H
