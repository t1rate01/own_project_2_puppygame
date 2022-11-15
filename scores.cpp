#include "scores.h"

scores::scores(QGraphicsItem * parent): QGraphicsTextItem(parent)
{
    score = 0;
    setPlainText("Score : " + QString::number(score));
    setDefaultTextColor(Qt::red);
    setFont(QFont("comic",16));
}

void scores::increasescore()
{
    score++;
 setPlainText("Score : " + QString::number(score));
}
