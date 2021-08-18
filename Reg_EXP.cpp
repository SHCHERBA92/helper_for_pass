#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::Reg_EXP()
{
    /// для телефона
    QRegExp reg_phone( "^[1-9]\\d{0,11}$" );
    QRegExpValidator *validator_phone = new QRegExpValidator(reg_phone, this);
    ui->lineEdit_6->setValidator(validator_phone);

    /// для Даты рождения
    QRegExp reg_birthday( "^[0-32]\\d{0,1}$" );
    QRegExpValidator *validator_birthday = new QRegExpValidator(reg_birthday, this);
    ui->lineEdit_8->setValidator(validator_birthday);

    QRegExp Reg_DataBirthday("^?19[0-9][0-9]|20[0-9][0-9]");
    QRegExpValidator *validator_DataBirthday = new QRegExpValidator(Reg_DataBirthday, this);
    ui->lineEdit_9->setValidator(validator_DataBirthday);
}
