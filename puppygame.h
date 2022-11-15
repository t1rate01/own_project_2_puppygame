#ifndef PUPPYGAME_H
#define PUPPYGAME_H

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QMediaPlayer>
#include "player.h"
#include "puppy.h"
#include "scores.h"

class puppygame : public QGraphicsView
{
    Q_OBJECT
public:
    puppygame();
    void show();
    int windowx,windowy;
    QGraphicsScene * scene;
    scores * points;

public slots:
    void gametimer();
};

#endif // PUPPYGAME_H
