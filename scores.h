#ifndef SCORES_H
#define SCORES_H

#include <QFont>
#include <QGraphicsTextItem>


class scores : public QGraphicsTextItem
{
public:
    scores(QGraphicsItem * parent = 0);
    void increasescore();
    void getscore();
    int score;
};

#endif // SCORES_H
