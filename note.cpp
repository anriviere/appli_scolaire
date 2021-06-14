#include "note.h"
#include "ui_note.h"

Note::Note(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Note)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

Note::~Note()
{
    delete ui;
}

void Note::on_actionNew_triggered()
{
    filename = "";
    ui->textEdit->setPlainText("");

}

void Note::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this,"Open a file");
    if(!file.isEmpty())
    {
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text))
        {
            filename = file;
            QTextStream in(&sFile);
            QString text = in.readAll();
            sFile.close();

            ui->textEdit->setPlainText(text);
        }

    }
}

void Note::on_actionSave_triggered()
{
    QFile sFile(filename);
    if(sFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out(&sFile);

        out << ui->textEdit->toPlainText();

        sFile.flush();
        sFile.close();
    }

}

void Note::on_actionSave_as_triggered()
{

    QString file = QFileDialog::getSaveFileName(this,"Open a file");
    if(!file.isEmpty())
    {
        filename = file;
         on_actionSave_triggered();

    }

}

void Note::on_actionCopy_triggered()
{
    ui->textEdit->copy();

}

void Note::on_actionCut_triggered()
{
    ui->textEdit->cut();

}

void Note::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void Note::on_actionUndo_triggered()
{

    ui->textEdit->undo();
}

void Note::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}
