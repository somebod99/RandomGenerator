/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *inDataWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *labelsHLayout;
    QLabel *seedLabel;
    QLabel *powerLabel;
    QLabel *lagsLabel;
    QHBoxLayout *editsHLayout;
    QLineEdit *seedLineEdit;
    QLineEdit *powerLineEdit;
    QLineEdit *lagsLineEdit;
    QPushButton *browsPushButton;
    QWidget *resultVWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *seqLengthWidget;
    QGridLayout *gridLayout_3;
    QLabel *lengthLabel;
    QLineEdit *lengthLineEdit;
    QTextBrowser *genSeqTextBrowser;
    QWidget *resultWidget;
    QGridLayout *gridLayout;
    QLabel *pirsonLabel;
    QLabel *tLabel;
    QPushButton *genPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(876, 474);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        inDataWidget = new QWidget(Widget);
        inDataWidget->setObjectName(QString::fromUtf8("inDataWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inDataWidget->sizePolicy().hasHeightForWidth());
        inDataWidget->setSizePolicy(sizePolicy);
        inDataWidget->setMinimumSize(QSize(700, 0));
        gridLayout_2 = new QGridLayout(inDataWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelsHLayout = new QHBoxLayout();
        labelsHLayout->setObjectName(QString::fromUtf8("labelsHLayout"));
        labelsHLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        seedLabel = new QLabel(inDataWidget);
        seedLabel->setObjectName(QString::fromUtf8("seedLabel"));
        QFont font;
        font.setPointSize(14);
        seedLabel->setFont(font);
        seedLabel->setAlignment(Qt::AlignCenter);

        labelsHLayout->addWidget(seedLabel);

        powerLabel = new QLabel(inDataWidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        QFont font1;
        font1.setPointSize(16);
        powerLabel->setFont(font1);
        powerLabel->setAlignment(Qt::AlignCenter);

        labelsHLayout->addWidget(powerLabel);

        lagsLabel = new QLabel(inDataWidget);
        lagsLabel->setObjectName(QString::fromUtf8("lagsLabel"));
        lagsLabel->setFont(font1);
        lagsLabel->setAlignment(Qt::AlignCenter);

        labelsHLayout->addWidget(lagsLabel);


        gridLayout_2->addLayout(labelsHLayout, 0, 1, 1, 1);

        editsHLayout = new QHBoxLayout();
        editsHLayout->setObjectName(QString::fromUtf8("editsHLayout"));
        seedLineEdit = new QLineEdit(inDataWidget);
        seedLineEdit->setObjectName(QString::fromUtf8("seedLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(seedLineEdit->sizePolicy().hasHeightForWidth());
        seedLineEdit->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        seedLineEdit->setFont(font2);

        editsHLayout->addWidget(seedLineEdit);

        powerLineEdit = new QLineEdit(inDataWidget);
        powerLineEdit->setObjectName(QString::fromUtf8("powerLineEdit"));
        sizePolicy1.setHeightForWidth(powerLineEdit->sizePolicy().hasHeightForWidth());
        powerLineEdit->setSizePolicy(sizePolicy1);
        powerLineEdit->setFont(font2);

        editsHLayout->addWidget(powerLineEdit);

        lagsLineEdit = new QLineEdit(inDataWidget);
        lagsLineEdit->setObjectName(QString::fromUtf8("lagsLineEdit"));
        sizePolicy1.setHeightForWidth(lagsLineEdit->sizePolicy().hasHeightForWidth());
        lagsLineEdit->setSizePolicy(sizePolicy1);
        lagsLineEdit->setFont(font2);

        editsHLayout->addWidget(lagsLineEdit);


        gridLayout_2->addLayout(editsHLayout, 1, 1, 1, 1);

        browsPushButton = new QPushButton(inDataWidget);
        browsPushButton->setObjectName(QString::fromUtf8("browsPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(browsPushButton->sizePolicy().hasHeightForWidth());
        browsPushButton->setSizePolicy(sizePolicy2);
        browsPushButton->setMinimumSize(QSize(0, 0));
        browsPushButton->setMaximumSize(QSize(60, 16777215));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(false);
        browsPushButton->setFont(font3);

        gridLayout_2->addWidget(browsPushButton, 1, 0, 1, 1);


        verticalLayout_4->addWidget(inDataWidget);

        resultVWidget = new QWidget(Widget);
        resultVWidget->setObjectName(QString::fromUtf8("resultVWidget"));
        verticalLayout_2 = new QVBoxLayout(resultVWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        seqLengthWidget = new QWidget(resultVWidget);
        seqLengthWidget->setObjectName(QString::fromUtf8("seqLengthWidget"));
        sizePolicy.setHeightForWidth(seqLengthWidget->sizePolicy().hasHeightForWidth());
        seqLengthWidget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(seqLengthWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lengthLabel = new QLabel(seqLengthWidget);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));
        sizePolicy.setHeightForWidth(lengthLabel->sizePolicy().hasHeightForWidth());
        lengthLabel->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(10);
        lengthLabel->setFont(font4);
        lengthLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lengthLabel, 0, 0, 1, 1);

        lengthLineEdit = new QLineEdit(seqLengthWidget);
        lengthLineEdit->setObjectName(QString::fromUtf8("lengthLineEdit"));
        sizePolicy.setHeightForWidth(lengthLineEdit->sizePolicy().hasHeightForWidth());
        lengthLineEdit->setSizePolicy(sizePolicy);
        lengthLineEdit->setMinimumSize(QSize(0, 0));
        lengthLineEdit->setMaximumSize(QSize(150, 32));
        lengthLineEdit->setFont(font2);
        lengthLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lengthLineEdit, 2, 0, 1, 1);


        verticalLayout_2->addWidget(seqLengthWidget);

        genSeqTextBrowser = new QTextBrowser(resultVWidget);
        genSeqTextBrowser->setObjectName(QString::fromUtf8("genSeqTextBrowser"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(genSeqTextBrowser->sizePolicy().hasHeightForWidth());
        genSeqTextBrowser->setSizePolicy(sizePolicy3);
        genSeqTextBrowser->setFont(font1);

        verticalLayout_2->addWidget(genSeqTextBrowser);

        resultWidget = new QWidget(resultVWidget);
        resultWidget->setObjectName(QString::fromUtf8("resultWidget"));
        sizePolicy.setHeightForWidth(resultWidget->sizePolicy().hasHeightForWidth());
        resultWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(resultWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pirsonLabel = new QLabel(resultWidget);
        pirsonLabel->setObjectName(QString::fromUtf8("pirsonLabel"));
        sizePolicy.setHeightForWidth(pirsonLabel->sizePolicy().hasHeightForWidth());
        pirsonLabel->setSizePolicy(sizePolicy);
        pirsonLabel->setFont(font1);
        pirsonLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pirsonLabel, 0, 0, 1, 1);

        tLabel = new QLabel(resultWidget);
        tLabel->setObjectName(QString::fromUtf8("tLabel"));
        sizePolicy.setHeightForWidth(tLabel->sizePolicy().hasHeightForWidth());
        tLabel->setSizePolicy(sizePolicy);
        tLabel->setFont(font1);
        tLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(tLabel, 1, 0, 1, 1);

        genPushButton = new QPushButton(resultWidget);
        genPushButton->setObjectName(QString::fromUtf8("genPushButton"));
        sizePolicy3.setHeightForWidth(genPushButton->sizePolicy().hasHeightForWidth());
        genPushButton->setSizePolicy(sizePolicy3);
        genPushButton->setMaximumSize(QSize(272, 42));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        genPushButton->setFont(font5);

        gridLayout->addWidget(genPushButton, 2, 0, 1, 1);


        verticalLayout_2->addWidget(resultWidget);


        verticalLayout_4->addWidget(resultVWidget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Random generator", nullptr));
        seedLabel->setText(QCoreApplication::translate("Widget", "SEED*", nullptr));
        powerLabel->setText(QCoreApplication::translate("Widget", "POWER ALPHABET*", nullptr));
        lagsLabel->setText(QCoreApplication::translate("Widget", "LAG COEFS", nullptr));
        browsPushButton->setText(QCoreApplication::translate("Widget", "BROWS", nullptr));
        lengthLabel->setText(QCoreApplication::translate("Widget", "LENGTH SEQUENCE", nullptr));
        pirsonLabel->setText(QString());
        tLabel->setText(QString());
        genPushButton->setText(QCoreApplication::translate("Widget", "GENERATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
