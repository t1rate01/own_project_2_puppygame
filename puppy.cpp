#include "puppy.h"
#include <QDebug>

puppy::puppy(int x, int y)
{
    windowx = x;
    windowy = y;
    puppytimer = new QTimer;
    connect(puppytimer,SIGNAL(timeout()),this,SLOT(movePuppy()));
    puppytimer->start(25);
    directiontimer = new QTimer;
    connect(directiontimer,SIGNAL(timeout()),this,SLOT(changeDir()));
    directiontimer->start(100);
    setPixmap(QPixmap(":/images/husky.jpg"));
}

puppy::~puppy()
{
qDebug()<<"Puppy deleted";
}

void puppy::movePuppy()
{
    switch(direction) {
    case 1:
        if(pos().x() > 0){
        setPos(x()-20,y());
        }// left
        break;
    case 2 :
        if(pos().x()+pixmap().width() < windowx ){
        setPos(x()+20,y());
        }// right
        break;
    case 3:
        if(pos().y() > 0){
        setPos(x(),y()-20);
        }// up
        break;
    case 4:
        if(pos().y()+pixmap().height() < windowy){
        setPos(x(),y()+20);
        }// down
}
}

void puppy::changeDir()
{
    int dir = rand()%100;
    if (dir < 25){
        direction = 1;
    }
    if (dir > 25 and dir < 50){
        direction = 2;
    }
    if (dir > 50 and dir < 75){
        direction = 3;
    }
    if (dir > 75){
        direction = 4;
    }

}
