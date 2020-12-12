#include "review.h"
#include "ui_review.h"

review::review(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::review)
{
    ui->setupUi(this);
    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->table->verticalHeader()->setVisible(false);
    ui->text->setText(" ");
    displayAll();
}

review::~review()
{
    delete ui;
}

/*
 * Entire class is following strategy pattern utility
 * That is, main goal is to display the reviews from
 * the database, though both implementations give modified
 * and separate, non-reliant answers based on user preference.
 */

// Displays all by Rating number order. Implementation 1.
void review::displayAll() {
    QSqlQuery *qry = new QSqlQuery(db);
    QSqlQueryModel *modal = new QSqlQueryModel();


    qry->prepare("SELECT rating, review FROM reviews ORDER BY rating ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->table->setModel(modal);

    qDebug() << "WHITEBOX 7 | Implementation 1 Query success.";
}

// Displays per Rating val. Implementation 2.
void review::displayFilter(int position) {
    QSqlQuery *qry = new QSqlQuery(db);
    QSqlQueryModel *modal = new QSqlQueryModel();

    //If slider is at 0, reprise the normal setting.
    if(position == 0) {
        displayAll();
        return;
    }

    qry->prepare("SELECT rating, review FROM reviews WHERE rating =:val ORDER BY rating ASC");

    qry->bindValue(":val", position);
    qry->exec();
    modal->setQuery(*qry);
    ui->table->setModel(modal);
    qDebug() << "WHITEBOX 8 | Implementation 2 Query success.";

}

// Sets text to the review.
void review::on_table_clicked(const QModelIndex &index)
{
    QString val = ui->table->model()->data(index.siblingAtColumn(1),0).toString();
    ui->text->setText(val);
    qDebug() << "WHITEBOX 9 | Review shows up: " << val;
}

// Overloaded signal for implentation 2
void review::on_horizontalSlider_sliderMoved(int position)
{
    displayFilter(position);
}

void review::on_cancel_clicked()
{
    qDebug() << "WHITEBOX 11 | Close";
    close();
}
