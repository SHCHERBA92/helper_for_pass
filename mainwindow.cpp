#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /// Устанавливаем чек Боксы не активными до тех пор пока не будет нажата кнопка
    ui->checkBox->setHidden(true);
    ui->checkBox_2->setHidden(true);
    ui->checkBox_3->setHidden(true);
    ui->checkBox_4->setHidden(true);
    ui->checkBox_5->setHidden(true);
    ui->checkBox_6->setHidden(true);
    ui->checkBox_7->setHidden(true);
    ui->checkBox_8->setHidden(true);
    ui->checkBox_9->setHidden(true);
    ui->checkBox_10->setHidden(true);
    ui->checkBox_11->setHidden(true);
    ui->checkBox_12->setHidden(true);
    ui->checkBox_13->setHidden(true);


    /// Устанавливаем Лайн эдиты  не активными до тех пор пока не будет нажата кнопка

    ui->lineEdit->setHidden(true);
    ui->lineEdit_2->setHidden(true);
    ui->lineEdit_3->setHidden(true);
    ui->lineEdit_4->setHidden(true);
    ui->lineEdit_5->setHidden(true);
    ui->lineEdit_6->setHidden(true);
    ui->lineEdit_7->setHidden(true);
    ui->lineEdit_8->setHidden(true);
    ui->lineEdit_9->setHidden(true);
    ui->lineEdit_10->setHidden(true);
    ui->lineEdit_11->setHidden(true);

    /// Устанавливаем Текс Эдит не активными до тех пор пока не будет нажата кнопка

    ui->textEdit->setHidden(true);
    ui->textEdit->setReadOnly(true);

    /// кнопка generate
    ui->pushButton_2->setHidden(true);

    // Оформление цветовой гаммы окна прграммы
    this->setPalette(QPalette(Qt::GlobalColor::black , QColor("#3F2B2B")) );
    this->setWindowTitle("HELPER TO PASSWORD");
    this->setWindowIcon(QIcon(":/new/prefix1/200-2005293_lock-password-icon-hd-png-download.png"));

    /// Здесь мы подабовляем всплывающие подсказки для пользователя
    ui->checkBox_12->setToolTip("Add numbers in start, end and between phrases");
    ui->checkBox_12->setToolTipDuration(7000);

    ui->checkBox_13->setToolTip("Adds special simbols in start, end and between phrases");
    ui->checkBox_13->setToolTipDuration(7000);

    ui->checkBox->setToolTip("Enter you first word of alleged password");
    ui->checkBox_2->setToolTip("Enter you second word of alleged password");
    ui->checkBox_3->setToolTip("Enter you Name");
    ui->checkBox_4->setToolTip("Enter you Surname");
    ui->checkBox_5->setToolTip("Enter you Nickname");
    ui->checkBox_6->setToolTip("Enter you Phone");
    ui->checkBox_7->setToolTip("Enter you Pet Name");
    ui->checkBox_8->setToolTip("Enter you Birthday");
    ui->checkBox_9->setToolTip("Enter you Year birthday");
    ui->checkBox_10->setToolTip("Enter you Adress");
    ui->checkBox_11->setToolTip("Enter you Street");

    ui->pushButton_2->setToolTip("Create password combinations");

    ui->checkBox->setToolTipDuration(7000);
    ui->checkBox_2->setToolTipDuration(7000);
    ui->checkBox_3->setToolTipDuration(7000);
    ui->checkBox_4->setToolTipDuration(7000);
    ui->checkBox_5->setToolTipDuration(7000);
    ui->checkBox_6->setToolTipDuration(7000);
    ui->checkBox_7->setToolTipDuration(7000);
    ui->checkBox_8->setToolTipDuration(7000);
    ui->checkBox_9->setToolTipDuration(7000);
    ui->checkBox_10->setToolTipDuration(7000);
    ui->checkBox_11->setToolTipDuration(7000);

    ui->pushButton_2->setToolTipDuration(7000);


    /// здесь создаём оконное сообщение о том, что данная прорамма полезна для людей
    My_Box = new QMessageBox(this);
    My_Box->setIconPixmap(QPixmap(":/new/prefix1/rocket-league-league-of-legends-tom-clancys-rainbow-six-siege-ico-icon-warning-icons-thumbnail.jpg"));
    //My_Box->setIconPixmap(QPixmap(":/new/prefix1/8g8CZ88xijc.jpg"));
    My_Box->setButtonText(1, "Accept");
    My_Box->setWindowTitle("Rules");
    My_Box->setText("This program is intended for those who have forgotten their password, "
                    "but remember what words it consists of. "
                    "This program will help you recover your password. "
                    "In no case do not use this program for personal gain.");
    My_Box->setPalette(QPalette(Qt::GlobalColor::black,Qt::GlobalColor::darkGray, QColor("#3F2B3B") , QColor("#3F2B1B"), QColor("#3F2C2B") ,QColor("#3A2B2B"), QColor("#3F4B2B")));

    //////////////
    /// метод для совместой работы checkBox и lineEdit
    Creat_Line_Edit();

    /// метод для RegExp
    Reg_EXP();

    /// слот для работы с "Save File"
    QAction *action_Save_File = new QAction(this);
    action_Save_File = ui->menuFile->addAction("Save_File");

    QAction *action_Discription = new QAction(this);
    action_Discription = ui->menuDescription->addAction("About this programm");

    connect(action_Save_File, &QAction::triggered, this, &MainWindow::slot_action_Save_File);

    /// слот для работы с "Description"
    connect(action_Discription, &QAction::triggered, this, &MainWindow::slot_action_Discription);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setHidden(true);    // делаем саму эту кнопку не активной

    /// Устанавливаем чек Боксы активными до тех пор пока не будет нажата кнопка
    ui->checkBox->setHidden(false);
    ui->checkBox_2->setHidden(false);
    ui->checkBox_3->setHidden(false);
    ui->checkBox_4->setHidden(false);
    ui->checkBox_5->setHidden(false);
    ui->checkBox_6->setHidden(false);
    ui->checkBox_7->setHidden(false);
    ui->checkBox_8->setHidden(false);
    ui->checkBox_9->setHidden(false);
    ui->checkBox_10->setHidden(false);
    ui->checkBox_11->setHidden(false);
    ui->checkBox_12->setHidden(false);
    ui->checkBox_13->setHidden(false);


    /// Устанавливаем Лайн эдиты активными до тех пор пока не будет нажата кнопка

    ui->lineEdit->setHidden(false);
    ui->lineEdit_2->setHidden(false);
    ui->lineEdit_3->setHidden(false);
    ui->lineEdit_4->setHidden(false);
    ui->lineEdit_5->setHidden(false);
    ui->lineEdit_6->setHidden(false);
    ui->lineEdit_7->setHidden(false);
    ui->lineEdit_8->setHidden(false);
    ui->lineEdit_9->setHidden(false);
    ui->lineEdit_10->setHidden(false);
    ui->lineEdit_11->setHidden(false);

    ui->pushButton_2->setHidden(false);

    /// Устанавливаем Текс Эдит активными до тех пор пока не будет нажата кнопка

    ui->textEdit->setHidden(false);

    My_Box->exec(); // вывод предупреждения

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
    Creat_Text_Edit();
}

void MainWindow::on_checkBox_12_clicked()
{
    if (ui->checkBox_12->isChecked())
    { QMessageBox::warning(this, "This is very impotant" , " This is very important, be careful, "
                                                           "because this mod gives a lot of different variation phrases. "
                                                           "This mod loads the processor."); }
}

void MainWindow::on_checkBox_13_clicked()
{
    if (ui->checkBox_13->isChecked())
    { QMessageBox::warning(this, "This is very impotant" , " This is very important, be careful, "
                                                           "because this mod gives a lot of different variation phrases. "
                                                           "This mod loads the processor."); }
}

// работа над тем, что бы сохранить в файл
void MainWindow::slot_action_Save_File()
{
    QString file_Name = QFileDialog::getSaveFileName(this,"Save File", "." , "Text files (*.txt)");
    QFile File(file_Name);
    QTextStream Text_Stream(&File);
    File.open(QIODevice::WriteOnly | QIODevice::Text);
    Text_Stream << ui->textEdit->toPlainText();


    File.close();
}

// вывод предупреждения
void MainWindow::slot_action_Discription()
{
    My_Box->exec();
}

