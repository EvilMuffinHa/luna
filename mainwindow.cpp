#include "mainwindow.h"
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    createPlayfield();
    createMenus();
}

void MainWindow::createPlayfield()
{
    playfield = new Playfield();
    setCentralWidget(playfield);
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    newAct = fileMenu->addAction(tr("&New"));
    openAct = fileMenu->addAction(tr("&Open"));
    saveAct = fileMenu->addAction(tr("&Save"));
    saveAsAct = fileMenu->addAction(tr("Save &As"));

    modelMenu = menuBar()->addMenu(tr("&Model"));
    runAct = modelMenu->addAction(tr("&Run"));
}

MainWindow::~MainWindow()
{
}

