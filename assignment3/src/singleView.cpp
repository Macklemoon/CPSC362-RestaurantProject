#include "singleView.h"
#include "ui_singleview.h"

singleView::singleView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::singleView)
{
    ui->setupUi(this);
    preCheck = false;
    postCheck = false;
}

singleView::~singleView()
{
    delete ui;
}

// Extended initializer.
void singleView::setName(QString n) {
    name = n;
    this->setWindowTitle(name);
    displayAll();
}

// Display initial conditions. Interactive bits is save checkbox and cancel button.
void singleView::displayAll() {
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("SELECT * FROM recipes WHERE Name =:name");
    qry->bindValue(":name", name);

    // If works, continue, else, see what went wrong
    if (qry->exec()) {}
    else {
        qDebug() << qry->lastError().text();
    }

    // Print to vals.
    qry->first();
    QString val = qry->value(0).toString();
    ui->name->setText(qry->value(0).toString());
    ui->recipe->setText(qry->value(1).toString());
    ui->ordered->setText(QString::number(qry->value(2).toInt()));

    qDebug() << "WHITEBOX 12 | Name of recipe: " << val;
}

void singleView::on_cancel_clicked()
{
    qDebug() << "WHITEBOX 13 | Closing.";
    close();
}
