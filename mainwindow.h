#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "playfield.h"
#include <QAction>
#include <QMainWindow>
#include <QMenu>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    Playfield *playfield;

    QMenu *fileMenu;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *saveAsAct;

    QMenu *modelMenu;
    QAction *runAct;

private:
    void createPlayfield();
    void createMenus();
};
#endif // MAINWINDOW_H
