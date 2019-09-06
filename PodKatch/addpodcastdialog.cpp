#include "addpodcastdialog.h"
#include "ui_addpodcastdialog.h"

AddPodcastDialog::AddPodcastDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPodcastDialog)
{
    ui->setupUi(this);
}

AddPodcastDialog::~AddPodcastDialog()
{
    delete ui;
}
