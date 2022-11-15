#include "puppygame.h"

puppygame::puppygame()
{

}

void puppygame::show()
{
    windowx=1280, windowy=720;


    //new scene
    scene = new QGraphicsScene(this);


    // make a player to put in to the scene and add to scene
    player * player1 = new player(windowx,windowy);
    scene->addItem(player1);
    // make focusable for movement controls and set focus
    player1->setFlag(QGraphicsItem::ItemIsFocusable);
    player1->setFocus();
    // make the puppies
    puppy * puppy1 = new puppy(windowx,windowy);
    puppy * puppy2 = new puppy(windowx,windowy);
    puppy * puppy3 = new puppy(windowx,windowy);
    puppy * puppy4 = new puppy(windowx,windowy);
    scene->addItem(puppy1);
    scene->addItem(puppy2);
    scene->addItem(puppy3);
    scene->addItem(puppy4);
    // add the view and set the scene
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(windowx,windowy);
    scene->setSceneRect(0,0,windowx,windowy);
    player1->setPos(view->width()/2-player1->pixmap().width()/2, view->height()-player1->pixmap().height());
    points = new scores;
    points->setPos(points->x(),points->y());
    scene->addItem(points);
}

void puppygame::gametimer()
{

}
