#ifndef PLAYFIELD_H
#define PLAYFIELD_H

#include <QGraphicsScene>
#include <QGraphicsView>

class Playfield : public QGraphicsView
{
public:
    Playfield(QWidget *parent = nullptr);

protected:
    QGraphicsScene *scene;

private:
    void createScene();
};

#endif // PLAYFIELD_H
