#ifndef ADDPODCASTDIALOG_H
#define ADDPODCASTDIALOG_H

#include <QDialog>

namespace Ui {
class AddPodcastDialog;
}

class AddPodcastDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPodcastDialog(QWidget *parent = nullptr);
    ~AddPodcastDialog();

private:
    Ui::AddPodcastDialog *ui;
};

#endif // ADDPODCASTDIALOG_H
