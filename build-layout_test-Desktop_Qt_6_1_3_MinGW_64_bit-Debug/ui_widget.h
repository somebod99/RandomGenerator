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
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(39, 39, 39, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        Widget->setPalette(palette);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);"));
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
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush5(QColor(164, 166, 168, 96));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        seedLabel->setPalette(palette1);
        QFont font;
        font.setPointSize(14);
        seedLabel->setFont(font);
        seedLabel->setAlignment(Qt::AlignCenter);

        labelsHLayout->addWidget(seedLabel);

        powerLabel = new QLabel(inDataWidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        powerLabel->setPalette(palette2);
        QFont font1;
        font1.setPointSize(16);
        powerLabel->setFont(font1);
        powerLabel->setAlignment(Qt::AlignCenter);

        labelsHLayout->addWidget(powerLabel);

        lagsLabel = new QLabel(inDataWidget);
        lagsLabel->setObjectName(QString::fromUtf8("lagsLabel"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lagsLabel->setPalette(palette3);
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
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        QBrush brush7(QColor(208, 208, 208, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        seedLineEdit->setPalette(palette4);
        QFont font2;
        font2.setPointSize(12);
        seedLineEdit->setFont(font2);
        seedLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        editsHLayout->addWidget(seedLineEdit);

        powerLineEdit = new QLineEdit(inDataWidget);
        powerLineEdit->setObjectName(QString::fromUtf8("powerLineEdit"));
        sizePolicy1.setHeightForWidth(powerLineEdit->sizePolicy().hasHeightForWidth());
        powerLineEdit->setSizePolicy(sizePolicy1);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        powerLineEdit->setPalette(palette5);
        powerLineEdit->setFont(font2);
        powerLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        editsHLayout->addWidget(powerLineEdit);

        lagsLineEdit = new QLineEdit(inDataWidget);
        lagsLineEdit->setObjectName(QString::fromUtf8("lagsLineEdit"));
        sizePolicy1.setHeightForWidth(lagsLineEdit->sizePolicy().hasHeightForWidth());
        lagsLineEdit->setSizePolicy(sizePolicy1);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        lagsLineEdit->setPalette(palette6);
        lagsLineEdit->setFont(font2);
        lagsLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        editsHLayout->addWidget(lagsLineEdit);


        gridLayout_2->addLayout(editsHLayout, 1, 1, 1, 1);

        browsPushButton = new QPushButton(inDataWidget);
        browsPushButton->setObjectName(QString::fromUtf8("browsPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(browsPushButton->sizePolicy().hasHeightForWidth());
        browsPushButton->setSizePolicy(sizePolicy2);
        browsPushButton->setMinimumSize(QSize(65, 25));
        browsPushButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush8(QColor(85, 0, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        browsPushButton->setPalette(palette7);
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(false);
        browsPushButton->setFont(font3);
        browsPushButton->setStyleSheet(QString::fromUtf8("border-style: solid; border-width: 2px; border-color: white;"));

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
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lengthLabel->setPalette(palette8);
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
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        lengthLineEdit->setPalette(palette9);
        lengthLineEdit->setFont(font2);
        lengthLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
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
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        genSeqTextBrowser->setPalette(palette10);
        genSeqTextBrowser->setFont(font1);
        genSeqTextBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

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
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        pirsonLabel->setPalette(palette11);
        pirsonLabel->setFont(font1);
        pirsonLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pirsonLabel, 0, 0, 1, 1);

        tLabel = new QLabel(resultWidget);
        tLabel->setObjectName(QString::fromUtf8("tLabel"));
        sizePolicy.setHeightForWidth(tLabel->sizePolicy().hasHeightForWidth());
        tLabel->setSizePolicy(sizePolicy);
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        tLabel->setPalette(palette12);
        tLabel->setFont(font1);
        tLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(tLabel, 1, 0, 1, 1);

        genPushButton = new QPushButton(resultWidget);
        genPushButton->setObjectName(QString::fromUtf8("genPushButton"));
        sizePolicy3.setHeightForWidth(genPushButton->sizePolicy().hasHeightForWidth());
        genPushButton->setSizePolicy(sizePolicy3);
        genPushButton->setMaximumSize(QSize(272, 42));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        genPushButton->setPalette(palette13);
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        genPushButton->setFont(font5);
        genPushButton->setStyleSheet(QString::fromUtf8("border-style: solid; border-width: 2px; border-color: white;"));

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
