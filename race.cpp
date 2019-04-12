#include "race.h"
#include "random.h"

Race::Race() {
    bool raceStatus(false);

    while (true) {
        raceStatus = update();
        if (raceStatus)
            break;
        
        path.print_path();
        std::cout << "| " << hare.get_energy() << "/" << tortoise.get_energy() << std::endl;

    }
}

const bool Race::update() {
    int rate(random(10));
    const int tortoiseMovement(tortoise.movement(rate));
    rate = random(10);
    const int hareMovement(hare.movement(rate));

    if (path.get_hare_position() == path.get_tortoise_position())
        hare.set_energy(-3);

    if (path.get_occupation(path.get_tortoise_position() + tortoiseMovement) == 3) {
        tortoise.restore_energy();
        path.set_steps(path.get_tortoise_position(), 0);
    }

    if (path.get_occupation(path.get_hare_position() + hareMovement) == 3) {
        hare.restore_energy();
        path.set_steps(path.get_hare_position(), 0);
    }
    
    const bool status(path.move(tortoiseMovement, hareMovement));
    return status;
}
