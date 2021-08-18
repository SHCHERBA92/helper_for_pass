#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::Creat_Line_Edit()
{
    /// Устанавливаем все поля неактивными
    ///
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->lineEdit_5->setEnabled(false);
    ui->lineEdit_6->setEnabled(false);
    ui->lineEdit_7->setEnabled(false);
    ui->lineEdit_8->setEnabled(false);
    ui->lineEdit_9->setEnabled(false);
    ui->lineEdit_10->setEnabled(false);
    ui->lineEdit_11->setEnabled(false);

    /// Через сигналы - Слоты мы делам поля ввода активными но при нажатом ЧекБоксе
    ///
    ///
    connect(ui->checkBox, &QCheckBox::clicked, this, [this](){

        if (ui->checkBox->isChecked() )
        {
            ui->lineEdit->setEnabled(true);
            ui->lineEdit->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit->setCursorPosition(1);
            ui->lineEdit->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit->setEnabled(false);
            ui->lineEdit->clear();
            ui->lineEdit->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // СЛОТ ДЛЯ ВТОРОГО ЧЕКбОКСА И LINEedIT
    connect(ui->checkBox_2, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_2->isChecked() )
        {
            ui->lineEdit_2->setEnabled(true);
            ui->lineEdit_2->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_2->setCursorPosition(1);
            ui->lineEdit_2->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_2->setEnabled(false);
            ui->lineEdit_2->clear();
            ui->lineEdit_2->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // слот для третьего чекбокса
    connect(ui->checkBox_3, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_3->isChecked() )
        {
            ui->lineEdit_3->setEnabled(true);
            ui->lineEdit_3->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_3->setCursorPosition(1);
            ui->lineEdit_3->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_3->setEnabled(false);
            ui->lineEdit_3->clear();
            ui->lineEdit_3->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // слот для четвертого чекбокса
    connect(ui->checkBox_4, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_4->isChecked() )
        {
            ui->lineEdit_4->setEnabled(true);
            ui->lineEdit_4->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_4->setCursorPosition(1);
            ui->lineEdit_4->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_4->setEnabled(false);
            ui->lineEdit_4->clear();
            ui->lineEdit_4->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // слот для 5 чекбокса
    connect(ui->checkBox_5, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_5->isChecked() )
        {
            ui->lineEdit_5->setEnabled(true);
            ui->lineEdit_5->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_5->setCursorPosition(1);
            ui->lineEdit_5->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_5->setEnabled(false);
            ui->lineEdit_5->clear();
            ui->lineEdit_5->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // слот для 6 чекбокса
    connect(ui->checkBox_6, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_6->isChecked() )
        {
            ui->lineEdit_6->setEnabled(true);
            ui->lineEdit_6->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_6->setCursorPosition(1);
            ui->lineEdit_6->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_6->setEnabled(false);
            ui->lineEdit_6->clear();
            ui->lineEdit_6->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    //слот для 7 чекбокса
    connect(ui->checkBox_7, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_7->isChecked() )
        {
            ui->lineEdit_7->setEnabled(true);
            ui->lineEdit_7->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_7->setCursorPosition(1);
            ui->lineEdit_7->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_7->setEnabled(false);
            ui->lineEdit_7->clear();
            ui->lineEdit_7->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // 8 слот для чекбокса
    connect(ui->checkBox_8, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_8->isChecked() )
        {
            ui->lineEdit_8->setEnabled(true);
            ui->lineEdit_8->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_8->setCursorPosition(1);
            ui->lineEdit_8->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_8->setEnabled(false);
            ui->lineEdit_8->clear();
            ui->lineEdit_8->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // слот для 9 чекбокса
    connect(ui->checkBox_9, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_9->isChecked() )
        {
            ui->lineEdit_9->setEnabled(true);
            ui->lineEdit_9->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_9->setCursorPosition(1);
            ui->lineEdit_9->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_9->setEnabled(false);
            ui->lineEdit_9->clear();
            ui->lineEdit_9->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // слот для 10 чекбокса
    connect(ui->checkBox_10, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_10->isChecked() )
        {
            ui->lineEdit_10->setEnabled(true);
            ui->lineEdit_10->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_10->setCursorPosition(1);
            ui->lineEdit_10->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_10->setEnabled(false);
            ui->lineEdit_10->clear();
            ui->lineEdit_10->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });

    // СЛОТ для 11 чекбокса
    connect(ui->checkBox_11, &QCheckBox::clicked, this, [this](){
        if (ui->checkBox_11->isChecked() )
        {
            ui->lineEdit_11->setEnabled(true);
            ui->lineEdit_11->setFocus(); // устанавливает фокус на наш lineEdit
            ui->lineEdit_11->setCursorPosition(1);
            ui->lineEdit_11->setStyleSheet("background-color:rgb(202, 255, 227);"
                                          "border : 1px purple;"
                                          "border-style: dashed;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);"
                                        "font-size: 16px;");
        }

        else

        {
            ui->lineEdit_11->setEnabled(false);
            ui->lineEdit_11->clear();
            ui->lineEdit_11->setStyleSheet("background-color:gray;"
                                        "border: 1px purple;"
                                        "border-style: solid;"
                                        "border-radius: 7px;"
                                        "padding: 0 2px 2px 2px;"
                                        "selection-background-color: rgb(226, 155, 218);");


        }

    });
}
