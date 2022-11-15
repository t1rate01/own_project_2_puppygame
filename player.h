#ifndef PLAYER_H
#define PLAYER_H

#include <QKeyEvent>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>
#include <QList>
#include <QMediaPlayer>
#include "scores.h"
#include "puppy.h"

class player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    player(int, int);  // give screen size if scene width or view widht dont work
    void keyPressEvent(QKeyEvent * event);

    int windowx,windowy;

};

#endif // PLAYER_H
