#include <iostream>
#include "player.h"
#include "board.h"
#include "game.h"
using namespace std;

int main()
{

    game Game;
    Game.initialize();
    Game.run();

    return 0;
}
