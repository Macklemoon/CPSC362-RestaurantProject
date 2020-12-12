/********************************************************************************
** Form generated from reading UI file 'singleview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEVIEW_H
#define UI_SINGLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_singleView
{
public:
    QLabel *label_2;
    QLabel *name;
    QPushButton *cancel;
    QLabel *recipe;
    QLabel *ordered;
    QLabel *label;

    void setupUi(QDialog *singleView)
    {
        if (singleView->objectName().isEmpty())
            singleView->setObjectName(QString::fromUtf8("singleView"));
        singleView->resize(800, 600);
        label_2 = new QLabel(singleView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 331, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        name = new QLabel(singleView);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(30, 100, 291, 51));
        QFont font1;
        font1.setPointSize(12);
        name->setFont(font1);
        name->setWordWrap(true);
        cancel = new QPushButton(singleView);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(680, 550, 93, 28));
        recipe = new QLabel(singleView);
        recipe->setObjectName(QString::fromUtf8("recipe"));
        recipe->setGeometry(QRect(330, 120, 441, 371));
        recipe->setAutoFillBackground(true);
        recipe->setFrameShape(QFrame::Box);
        recipe->setWordWrap(true);
        ordered = new QLabel(singleView);
        ordered->setObjectName(QString::fromUtf8("ordered"));
        ordered->setGeometry(QRect(90, 210, 131, 21));
        label = new QLabel(singleView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 190, 55, 61));
        label->setAutoFillBackground(true);
        label->setWordWrap(true);

        retranslateUi(singleView);

        QMetaObject::connectSlotsByName(singleView);
    } // setupUi

    void retranslateUi(QDialog *singleView)
    {
        singleView->setWindowTitle(QCoreApplication::translate("singleView", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("singleView", "Restaurant Metrics", nullptr));
        name->setText(QCoreApplication::translate("singleView", "Name", nullptr));
        cancel->setText(QCoreApplication::translate("singleView", "Go Back", nullptr));
        recipe->setText(QCoreApplication::translate("singleView", "Recipe", nullptr));
        ordered->setText(QCoreApplication::translate("singleView", "ordered", nullptr));
        label->setText(QCoreApplication::translate("singleView", "Num times ordered", nullptr));
    } // retranslateUi

};

namespace Ui {
    class singleView: public Ui_singleView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEVIEW_H
