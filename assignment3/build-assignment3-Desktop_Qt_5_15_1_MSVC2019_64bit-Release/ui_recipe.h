/********************************************************************************
** Form generated from reading UI file 'recipe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_H
#define UI_RECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recipe
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *popButton;
    QTableView *table;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *recipe)
    {
        if (recipe->objectName().isEmpty())
            recipe->setObjectName(QString::fromUtf8("recipe"));
        recipe->resize(800, 596);
        centralwidget = new QWidget(recipe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 351, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        popButton = new QPushButton(centralwidget);
        popButton->setObjectName(QString::fromUtf8("popButton"));
        popButton->setGeometry(QRect(30, 470, 211, 28));
        table = new QTableView(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(290, 80, 461, 421));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 510, 93, 28));
        recipe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(recipe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        recipe->setMenuBar(menubar);
        statusbar = new QStatusBar(recipe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        recipe->setStatusBar(statusbar);

        retranslateUi(recipe);

        QMetaObject::connectSlotsByName(recipe);
    } // setupUi

    void retranslateUi(QMainWindow *recipe)
    {
        recipe->setWindowTitle(QCoreApplication::translate("recipe", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("recipe", "Restaurant Metrics", nullptr));
        popButton->setText(QCoreApplication::translate("recipe", "Popular Recipes", nullptr));
        pushButton->setText(QCoreApplication::translate("recipe", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recipe: public Ui_recipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_H
