#include <QApplication>
#include "puppygame.h"


puppygame * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new puppygame;
    game->show();
    return a.exec();
}


 // MIETI PISTEYTYS KUN KOIRIA NAPATAAN KIINNI, VAIKEUSASTE???
