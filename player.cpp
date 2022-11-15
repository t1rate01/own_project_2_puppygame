#include "player.h"
#include "puppygame.h"
extern puppygame * game;

player::player(int x, int y)
{
 // set graphic
    setPixmap(QPixmap(":/images/dude.png"));
    windowx = x;
    windowy = y;


}

void player::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        if(pos().x() > 0){
            setPos(x()-20,y());
        }
    }
    else if(event->key() == Qt::Key_Right){
        if(pos().x() +pixmap().width() < windowx ){
            setPos(x()+20,y());
        }
    }
    else if (event->key() == Qt::Key_Up){
        if(pos().y() > 0){
            setPos(x(),y()-20);
        }
    }
    else if (event->key() == Qt::Key_Down){
        if(pos().y()+pixmap().height() < windowy ){
            setPos(x(),y()+20);
        }
    }
    else if (event->key() == Qt::Key_Space){
        QList<QGraphicsItem *> catch_attempt = collidingItems();
        int i,n;
         // collision and holding variables

            for (i = 0, n = catch_attempt.size(); i < n; ++i){
                if (typeid(*(catch_attempt[i])) == typeid(puppy)){
                    scene()->removeItem(catch_attempt[i]);
                    delete catch_attempt[i];
                    game->points->increasescore();
        }
            }}
}


