#include <iostream>
#include <ctime>
#include "game.h"
#include "race.h"

void Game::start() const {
    std::cout << "BANG! And they're off!\t\t\t\t\t\t\tH / T\n";
    srand(unsigned(time(NULL)));

    Race race(width);
}
