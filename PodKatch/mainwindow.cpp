#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addpodcastdialog.h"
#include "ui_addpodcastdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionAdd_Podcast_triggered()
{
    QDialog* addPodcastDialog = new QDialog(0,0);

    Ui_AddPodcastDialog addPodcastUi;
    addPodcastUi.setupUi(addPodcastDialog);

    addPodcastDialog->show();
}
