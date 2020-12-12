/********************************************************************************
** Form generated from reading UI file 'review.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEW_H
#define UI_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_review
{
public:
    QWidget *centralwidget;
    QTableView *table;
    QLabel *text;
    QPushButton *cancel;
    QLabel *label;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *review)
    {
        if (review->objectName().isEmpty())
            review->setObjectName(QString::fromUtf8("review"));
        review->resize(800, 600);
        centralwidget = new QWidget(review);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        table = new QTableView(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(290, 70, 481, 271));
        table->setCornerButtonEnabled(false);
        text = new QLabel(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(40, 370, 731, 121));
        text->setAutoFillBackground(true);
        text->setFrameShape(QFrame::Panel);
        text->setFrameShadow(QFrame::Plain);
        text->setLineWidth(2);
        text->setWordWrap(true);
        cancel = new QPushButton(centralwidget);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(680, 510, 93, 28));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 360, 91, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAutoFillBackground(true);
        label_2->setFrameShape(QFrame::Box);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 221, 221, 31));
        horizontalSlider->setAutoFillBackground(true);
        horizontalSlider->setMaximum(5);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(0);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 175, 221, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        review->setCentralWidget(centralwidget);
        menubar = new QMenuBar(review);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        review->setMenuBar(menubar);
        statusbar = new QStatusBar(review);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        review->setStatusBar(statusbar);

        retranslateUi(review);

        QMetaObject::connectSlotsByName(review);
    } // setupUi

    void retranslateUi(QMainWindow *review)
    {
        review->setWindowTitle(QCoreApplication::translate("review", "MainWindow", nullptr));
        text->setText(QCoreApplication::translate("review", "TextLabel", nullptr));
        cancel->setText(QCoreApplication::translate("review", "Go Back", nullptr));
        label->setText(QCoreApplication::translate("review", "Restaurant Metrics", nullptr));
        label_2->setText(QCoreApplication::translate("review", "Review", nullptr));
        label_3->setText(QCoreApplication::translate("review", "Ratings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class review: public Ui_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
