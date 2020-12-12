#include "recipe.h"
#include "ui_recipe.h"

recipe::recipe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recipe)
{
    ui->setupUi(this);
    clicked = true;
    single = new singleView();
    ui->table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    displayAll();
}

recipe::~recipe()
{
    delete ui;
}

/*
 * Entire class is following strategy pattern utility
 * That is, main goal is to display the recipes from
 * the database, though both implementations give modified
 * and separate, non-reliant answers based on user preference.
 */

// Display all Recipes by name
void recipe::displayAll() {
    QSqlQuery *qry = new QSqlQuery(db);
    QSqlQueryModel *modal = new QSqlQueryModel();


    qry->prepare("SELECT Name, Ordered FROM recipes ORDER BY Name ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->table->setModel(modal);
    qDebug() << "WHITEBOX 4 | Implementation 1 Query success.";
}

// Display recipes that have been ordered > 20 times.
void recipe::displayTop() {
    QSqlQuery *qry = new QSqlQuery(db);
    QSqlQueryModel *modal = new QSqlQueryModel();


    qry->prepare("SELECT Name, Ordered FROM recipes WHERE Ordered > 20 ORDER BY Name ASC");

    qry->exec();
    modal->setQuery(*qry);
    ui->table->setModel(modal);
    qDebug() << "WHITEBOX 6 | Implementation 2 Query success.";
}

void recipe::on_table_clicked(const QModelIndex &index)
{
    QString currName = ui->table->model()->data(index.siblingAtColumn(0),0).toString();
    single->setName(currName);
    single->show();
    single->setWindowState(Qt::WindowState::WindowActive);
}

void recipe::on_popButton_clicked()
{
    // If not clicked, show top few, else flip flop
    QString val = (clicked ? "TRUE" : "FALSE");
    qDebug() << "WHITEBOX 5 | Clicked: " << val;
    if(clicked) {
        clicked = false;
        displayTop();
    } else {
        clicked = true;
        displayAll();
    }
}

void recipe::on_pushButton_clicked()
{
    qDebug() << "WHITEBOX 10 | Close";
    close();
}
