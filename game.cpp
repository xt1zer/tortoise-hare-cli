#include <iostream>
#include "game.h"
#include "race.h"

Game::Game(): width(70) {
    start();
    
    Race race;
}

void Game::start() const {
    std::cout << "BANG! And they're off!\t\t\t\t\t\t\tH / T\n";
    
    srand(unsigned(time(NULL)));
    
    path.print_path();
    std::cout << "| " << hare.get_energy() << "/" << tortoise.get_energy() << std::endl;

}
