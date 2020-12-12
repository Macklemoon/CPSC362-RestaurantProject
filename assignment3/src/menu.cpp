#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu), orderName(true), orderDistance(true), orderDifficulty(true), toggleSave(false)
{
    ui->setupUi(this);

    //populate();
}

menu::~menu()
{
    delete ui;
    delete mapper;
}

/*
 * 10/4/2020 - Michael Moon
 * Adding user-based funcitonality to menu; specifically for saved hikes
 * and later, to edit and delete account when logged in.
 *
 */
void menu::setAccount(account newItem) {
    newAccount = newItem;
    setting = new accountSettings();
    setting->setAccount(newAccount);
    //single = new singleView();
    qDebug() << "WHITEBOX 1 | Menu generated.";
}

void menu::on_buttonAccount_clicked()
{
    setting->show();
    setting->setWindowState(Qt::WindowState::WindowActive);
}
void menu::on_buttonMap_clicked()
{
    mapper = new gmap();
    mapper->resize(1024, 840);
    mapper->show();
}

void menu::on_buttonReview_clicked()
{
    reviewer = new review();
    reviewer->show();
}

void menu::on_buttonRecipe_clicked()
{
    reciper = new recipe();
    reciper->show();
}
