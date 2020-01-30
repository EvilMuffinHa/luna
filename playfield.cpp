#include "playfield.h"

Playfield::Playfield(QWidget *parent)
    : QGraphicsView(parent)
{
    createScene();
}

void Playfield::createScene()
{
    scene = new QGraphicsScene();
    setScene(scene);
}
