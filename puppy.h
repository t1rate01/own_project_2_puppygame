#ifndef PUPPY_H
#define PUPPY_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QObject>
#include <QTimer>
#include <stdlib.h>

class puppy : public QObject, public QGraphicsPixmapItem
{
        Q_OBJECT
public:
    puppy(int, int);
    ~puppy();
    int windowx,windowy;
    short direction;
    QTimer * puppytimer;
    QTimer * directiontimer;

public slots:
    void movePuppy();
    void changeDir();
};

#endif // PUPPY_H
