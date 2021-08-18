#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QRect>
#include <QList>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QAction>
#include <QMenu>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QIcon>
#include <QPixmap>
#include <QRegExp>
#include <QRegExpValidator>
#include <QValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_12_clicked();

    void on_checkBox_13_clicked();

    void slot_action_Save_File();
    void slot_action_Discription();

private:
    Ui::MainWindow *ui;

    void Creat_Line_Edit();
    void Creat_Text_Edit();
    void Reg_EXP();

    QMessageBox *My_Box;


};
#endif // MAINWINDOW_H
