/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_file
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *file)
    {
        if (file->objectName().isEmpty())
            file->setObjectName(QString::fromUtf8("file"));
        file->resize(445, 599);
        pushButton = new QPushButton(file);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 171, 61));
        pushButton_2 = new QPushButton(file);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 30, 181, 61));
        textBrowser = new QTextBrowser(file);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 130, 421, 451));

        retranslateUi(file);

        QMetaObject::connectSlotsByName(file);
    } // setupUi

    void retranslateUi(QWidget *file)
    {
        file->setWindowTitle(QCoreApplication::translate("file", "file", nullptr));
        pushButton->setText(QCoreApplication::translate("file", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_2->setText(QCoreApplication::translate("file", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class file: public Ui_file {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
