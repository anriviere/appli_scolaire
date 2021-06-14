#ifndef PAINT_H
#define PAINT_H

#include <QMainWindow>
#include <QList>

class ScribbleArea;

class Paint : public QMainWindow
{
    Q_OBJECT

public:
    Paint();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void open();
    void save();
    void penColor();
    void penWidth();
    void about();

private:
    void createActions();
    void createMenus();

     bool maybeSave();

     bool saveFile(const QByteArray &fileFormat);

     ScribbleArea *scribbleArea;

     QMenu *saveAsMenu;
     QMenu *fileMenu;
     QMenu *optionMenu;
     QMenu *helpMenu;

     QAction *openAct;

     QList<QAction *> saveAsActs;
     QAction *exitAct;
     QAction *penColorAct;
     QAction *penWidthAct;
     QAction *printAct;
     QAction *clearScreenAct;
     QAction *aboutAct;
     QAction *aboutQtAct;
};

#endif // PAINT_H
