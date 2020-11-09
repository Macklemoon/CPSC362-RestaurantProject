/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *buttonAccount;
    QPushButton *buttonReview;
    QPushButton *buttonRecipe;
    QPushButton *buttonHeatmap;
    QPushButton *buttonRoute;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(612, 413);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 341, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        buttonAccount = new QPushButton(centralwidget);
        buttonAccount->setObjectName(QString::fromUtf8("buttonAccount"));
        buttonAccount->setGeometry(QRect(20, 320, 121, 28));
        buttonReview = new QPushButton(centralwidget);
        buttonReview->setObjectName(QString::fromUtf8("buttonReview"));
        buttonReview->setGeometry(QRect(320, 200, 91, 71));
        buttonRecipe = new QPushButton(centralwidget);
        buttonRecipe->setObjectName(QString::fromUtf8("buttonRecipe"));
        buttonRecipe->setGeometry(QRect(220, 200, 91, 71));
        buttonHeatmap = new QPushButton(centralwidget);
        buttonHeatmap->setObjectName(QString::fromUtf8("buttonHeatmap"));
        buttonHeatmap->setGeometry(QRect(220, 120, 91, 71));
        buttonRoute = new QPushButton(centralwidget);
        buttonRoute->setObjectName(QString::fromUtf8("buttonRoute"));
        buttonRoute->setGeometry(QRect(320, 120, 91, 71));
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 612, 26));
        menu->setMenuBar(menubar);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menu->setStatusBar(statusbar);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Menu", nullptr));
        label->setText(QCoreApplication::translate("menu", "Restaurant Metrics", nullptr));
        buttonAccount->setText(QCoreApplication::translate("menu", "Account Settings", nullptr));
        buttonReview->setText(QCoreApplication::translate("menu", "Reviews", nullptr));
        buttonRecipe->setText(QCoreApplication::translate("menu", "Recipes", nullptr));
        buttonHeatmap->setText(QCoreApplication::translate("menu", "Heatmap", nullptr));
        buttonRoute->setText(QCoreApplication::translate("menu", "Route", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
