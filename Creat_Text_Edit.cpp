#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::Creat_Text_Edit()
{

    /// Создаём строки которые берут данные от line Edit
    QString First_Word = ui->lineEdit->text();
    QString Second_Word = ui->lineEdit_2->text();
    QString Name = ui->lineEdit_3->text();
    QString Surename = ui->lineEdit_4->text();
    QString NickName = ui->lineEdit_5->text();
    QString Phone = ui->lineEdit_6->text();
    QString Pet_Name = ui->lineEdit_7->text();
    QString Birthday = ui->lineEdit_8->text();
    QString Year_birthday = ui->lineEdit_9->text();
    QString Adress = ui->lineEdit_10->text();
    QString Street = ui->lineEdit_11->text();

    /// Создаём список из всех возможных слов от line edit
    QList<QString> My_List = {First_Word, Second_Word, Name, Surename, NickName, Phone, Pet_Name, Birthday, Year_birthday, Adress, Street};

//    for (int i = 0; i < My_List.count(); i++) {
//        qDebug() << My_List[i] << " == " << i;
//    }


    /// Подставка первого слова из lineEdit для остальных слов
    ///
if(My_List[0]!="")
    {
        for (int i = 1;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[0] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[0]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 1;i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[0] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[0] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[0] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[0] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[0] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 1;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[0] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[0] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[0] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[0] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[0] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[0] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[0] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[0] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[0] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[0] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[0] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[0] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[0] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[0] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[0] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[0] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[0] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[0] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[0] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[0] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }



/// Подставка второго слова из lineEdit для остальных слов
///
if(My_List[1]!="")
    {
        for (int i = 2;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[1] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[1]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 2;i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[1] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[1] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[1] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[1] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[1] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 2;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[1] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[1] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[1] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[1] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[1] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[1] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[1] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[1] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[1] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[1] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[1] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[1] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[1] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[1] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[1] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[1] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[1] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[1] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[1] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[1] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }


/// Подставка третьего слова из lineEdit для остальных слов
///
if(My_List[2]!="")
    {
        for (int i = 3;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[2] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[2]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 3;i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[2] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[2] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[2] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[2] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[2] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 3;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[2] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[2] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[2] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[2] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[2] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[2] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[2] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[2] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[2] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[2] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[2] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[2] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[2] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[2] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[2] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[2] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[2] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[2] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[2] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[2] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }




/// Подставка четвертого слова из lineEdit для остальных слов
///
if(My_List[3]!="")
    {
        for (int i = 4;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[3] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[3]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 4;i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[3] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[3] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[3] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[3] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[3] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 4;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[3] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[3] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[3] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[3] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[3] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[3] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[3] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[3] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[3] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[3] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[3] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[3] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[3] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[3] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[3] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[3] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[3] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[3] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[3] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[3] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }



/// Подставка пятого слова из lineEdit для остальных слов
///
if(My_List[4]!="")
    {
        for (int i = 5;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[4] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[4]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 5;i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[4] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[4] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[4] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[4] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[4] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 5;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[4] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[4] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[4] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[4] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[4] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[4] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[4] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[4] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[4] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[4] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[4] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[4] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[4] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[4] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[4] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[4] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[4] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[4] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[4] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[4] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }




/// Подставка шестого слова из lineEdit для остальных слов
///
if(My_List[5]!="")
    {
        for (int i = 6;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[5] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[5]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 6; i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[5] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[5] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[5] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[5] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[5] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 6;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[5] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[5] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[5] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[5] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[5] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[5] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[5] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[5] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[5] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[5] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[5] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[5] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[5] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[5] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[5] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[5] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[5] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[5] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[5] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[5] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }




/// Подставка седьмого слова из lineEdit для остальных слов
///
if(My_List[6]!="")
    {
        for (int i = 7;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[6] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[6]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 7; i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[6] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[6] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[6] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[6] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[6] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 7;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[6] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[6] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[6] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[6] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[6] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[6] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[6] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[6] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[6] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[6] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[6] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[6] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[6] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[6] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[6] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[6] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[6] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[6] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[6] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[6] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }





/// Подставка восьмого слова из lineEdit для остальных слов
///
if(My_List[7]!="")
    {
        for (int i = 8;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[7] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[7]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 8; i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[7] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[7] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[7] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[7] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[7] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 8;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[7] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[7] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[7] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[7] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[7] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[7] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[7] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[7] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[7] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[7] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[7] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[7] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[7] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[7] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[7] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[7] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[7] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[7] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[7] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[7] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }




/// Подставка девятого слова из lineEdit для остальных слов
///
if(My_List[8]!="")
    {
        for (int i = 9;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[8] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[8]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 9; i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[8] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[8] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[8] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[8] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[8] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 9;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[8] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[8] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[8] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[8] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[8] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[8] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[8] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[8] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[8] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[8] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[8] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[8] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[8] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[8] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[8] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[8] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[8] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[8] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[8] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[8] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }






/// Подставка десятого слова из lineEdit для остальных слов
///
if(My_List[9]!="")
    {
        for (int i = 10;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[9] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[9]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 10; i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[9] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[9] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[9] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[9] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[9] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 10;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[9] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[9] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[9] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[9] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[9] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[9] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[9] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[9] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[9] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[9] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[9] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[9] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[9] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[9] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[9] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[9] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[9] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[9] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[9] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[9] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }





/// Подставка десятого слова из lineEdit для остальных слов
///
if(My_List[10]!="")
    {
        for (int i = 11;i < My_List.count(); i++)
            {
                if(My_List[i]!="")  // если есть слово в line Edit
                    {
                        ui->textEdit->append(My_List[10] + My_List[i]);  //AB
                        ui->textEdit->append(My_List[i] + My_List[10]);  //BA
                    }
            }

        if(ui->checkBox_12->isChecked())    // условие нажатие кнопки "Add Number"
            {
                for (int i = 11; i < My_List.count(); i++)    // работаем через вложенный цикл
                    {
                        if(My_List[i]!="")
                        {
                            for (int j = 0; j < 1000; j++) // цикл для подстановки чисел
                                {
                                    ui->textEdit->append(My_List[10] + My_List[i] + QString::number(j));  // AB1
                                    ui->textEdit->append(My_List[10] + QString::number(j) + My_List[i]);  // A1B
                                    ui->textEdit->append(QString::number(j) + My_List[10] + My_List[i]);  //1AB
                                    ui->textEdit->append(QString::number(j) + My_List[10] + My_List[i] + QString::number(j));  //1AB1
                                    ui->textEdit->append(QString::number(j) + My_List[10] + QString::number(j) + My_List[i] + QString::number(j));  //1A1B1
                                }
                        }
                    }
            }
        /// Добавление символов
        if(ui->checkBox_13->isChecked())
            {
            for (int i = 11;i < My_List.count(); i++)    // работаем через вложенный цикл
                {
                    if(My_List[i]!="")
                    {
                        for (char simbol_1 = 33; simbol_1 < 48; simbol_1++) // цикл для подстановки чисел
                            {
                                ui->textEdit->append(My_List[10] + My_List[i] + simbol_1);  // AB1
                                ui->textEdit->append(My_List[10] + simbol_1 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_1 + My_List[10] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_1 + My_List[10] + My_List[i] + simbol_1);  //1AB1
                                ui->textEdit->append(simbol_1 + My_List[10] + simbol_1 + My_List[i] + simbol_1);  //1A1B1
                            }
                        for (char simbol_2 = 58; simbol_2 < 65; simbol_2++)
                            {
                                ui->textEdit->append(My_List[10] + My_List[i] + simbol_2);  // AB1
                                ui->textEdit->append(My_List[10] + simbol_2 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_2 + My_List[10] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_2 + My_List[10] + My_List[i] + simbol_2);  //1AB1
                                ui->textEdit->append(simbol_2 + My_List[10] + simbol_2 + My_List[i] + simbol_2);  //1A1B1
                            }
                        for (char simbol_3 = 91; simbol_3 < 97; simbol_3++)
                            {
                                ui->textEdit->append(My_List[10] + My_List[i] + simbol_3);  // AB1
                                ui->textEdit->append(My_List[10] + simbol_3 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_3 + My_List[10] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_3 + My_List[10] + My_List[i] + simbol_3);  //1AB1
                                ui->textEdit->append(simbol_3 + My_List[10] + simbol_3 + My_List[i] + simbol_3);  //1A1B1
                            }
                        for (char simbol_4 = 123; simbol_4 < 127; simbol_4++)
                            {
                                ui->textEdit->append(My_List[10] + My_List[i] + simbol_4);  // AB1
                                ui->textEdit->append(My_List[10] + simbol_4 + My_List[i]);  // A1B
                                ui->textEdit->append(simbol_4 + My_List[10] + My_List[i]);  //1AB
                                ui->textEdit->append(simbol_4 + My_List[10] + My_List[i] + simbol_4);  //1AB1
                                ui->textEdit->append(simbol_4 + My_List[10] + simbol_4 + My_List[i] + simbol_4);  //1A1B1
                            }
                    }
                }
            }
    }



}
