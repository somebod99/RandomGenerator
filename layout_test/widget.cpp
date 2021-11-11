#include "widget.h"
#include "ui_widget.h"

#include "AdditiveGenerator.h"
#include "Tools.h"

#include <fstream>
#include <vector>

#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->inDataWidget->setStyleSheet("QPushButton:hover {background-color: rgb(113, 113, 113)}");
    //ui->browsPushButton->setStyleSheet("border-style: solid; border-width: 2px; border-color: white;");

    ui->resultVWidget->setStyleSheet("QPushButton:hover {background-color: rgb(113, 113, 113)}");
    //ui->genPushButton->setStyleSheet("background-color: black; border-style: solid; border-width: 2px; border-color: white;");

    ui->genSeqTextBrowser->setStyleSheet("background-color: black;"
                                         "border-style: solid;"
                                         "border-width: 2px;"
                                         "border-color: white;"
                                         );

    connect(ui->browsPushButton, SIGNAL(clicked()), this, SLOT(slotBrows()));
    connect(ui->genPushButton, SIGNAL(clicked()), this, SLOT(slotGenerate()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotGenerate()
{
    try
    {
        if(ui->seedLineEdit->text() == "")
            throw "Error: enter seed";
        if(ui->powerLineEdit->text() == "")
            throw "Error: enter power of alphabet";
        if(ui->lengthLineEdit->text() == "")
            throw "Error: incorrect length for sequence";

        for(const auto& symbol : ui->lengthLineEdit->text().toStdString())
        {
            if(!std::isdigit(symbol))
                throw "Error: incorrect length for sequence";
        }

        std::vector<int> seed;

        if(ui->seedLineEdit->text().indexOf(".txt", 0) != -1)
        {
            QFile file(ui->seedLineEdit->text());

            if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
                throw "Error: cannot open file";

            QString str_seed = file.readAll();

            if(str_seed[str_seed.size() - 1] == ' ')
                throw "Error: incorrect seed";

            char pred = '\0';

            for(const auto& symbol : str_seed.toStdString())
            {
                if((!isdigit(symbol) && symbol != ' ') || (symbol == ' ' && pred == ' '))
                    throw "Error: incorrect seed";

                pred = symbol;
            }

            file.close();

            QList<QString> str_list = str_seed.split(' ');

            for(const auto& num : str_list)
                seed.push_back(num.toInt());
        }
        else
        {
            if(ui->seedLineEdit->text()[ui->seedLineEdit->text().size() - 1] == ' ')
                throw "Error: incorrect seed";

            char pred = '\0';

            for(const auto& symbol : ui->seedLineEdit->text().toStdString())
            {
                if((!isdigit(symbol) && symbol != ' ') || (symbol == ' ' && pred == ' '))
                    throw "Error: incorrect seed";

                pred = symbol;
            }

            QList<QString> str_list = ui->seedLineEdit->text().split(' ');

            for(const auto& num : str_list)
                seed.push_back(num.toInt());
        }

        for(const auto& symbol : ui->powerLineEdit->text().toStdString())
        {
            if(!isdigit(symbol))
                throw "Error: incorrect power of alphabet";
        }

        int N = ui->powerLineEdit->text().toInt();
        std::vector<int> lags;

        if(ui->lagsLineEdit->text() != "")
        {
            if(ui->lagsLineEdit->text()[ui->lagsLineEdit->text().size() - 1] == ' ')
                throw "Error: incorrect lag coefs";

            char pred = '\0';

            for(const auto& symbol : ui->lagsLineEdit->text().toStdString())
            {
                if((!isdigit(symbol) && symbol != ' ') || (symbol == ' ' && pred == ' '))
                    throw "Error: incorrect lag coefs";

                pred = symbol;
            }

            QList<QString> str_list = ui->lagsLineEdit->text().split(' ');

            for(const auto& num : str_list)
                lags.push_back(num.toInt());
        }

        AdditiveGenerator generator(N, seed, lags);

        std::vector<int> res_seq = generator.GetRandomSequence(ui->lengthLineEdit->text().toInt());

        QString str_res;

        for(const auto& elem : res_seq)
            str_res += QString::number(elem) + ' ';

        ui->genSeqTextBrowser->setText(str_res);

        ui->pirsonLabel->setText("PIRSON = " + QString::number(HiPirson(res_seq, generator.GetPowerAlphabet())));

        unsigned int T = generator.GetPeriod();

        if(T == MAX_PERIOD)
            ui->tLabel->setText("T >= " + QString::number(T));
        else
            ui->tLabel->setText("T = " + QString::number(T));

        QMessageBox::information(nullptr, "Info", "Sequence created successfully");
    }
    catch (const char* er)
    {
        QMessageBox::critical(nullptr, "ERROR", er);
    }
}

void Widget::slotBrows()
{
    ui->seedLineEdit->setText(QFileDialog::getOpenFileName(this, "Files"));
}
