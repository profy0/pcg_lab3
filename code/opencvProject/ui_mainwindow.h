/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_11;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(912, 595);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 9, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 10, 0, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_10, 12, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 11, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 5, 0, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_11, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 912, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\263\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\321\213 (rgb)", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\276\320\275\321\201\321\202\320\260\320\275\321\202\321\213", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\263\320\260\321\202\320\270\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\342\206\223 \320\237\320\276\321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\275\321\213\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270 \342\206\223", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265 \320\275\320\260 \320\272\320\276\320\275\321\201\321\202\320\260\320\275\321\202\321\203", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\262 \321\201\321\202\320\265\320\277\320\265\320\275\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\263\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\275\320\276\320\265 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 (rgb)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
