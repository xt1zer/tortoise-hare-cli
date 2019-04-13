#include "race.h"
#include "random.h"

Race::Race(const int & width) {
    path.print();
    std::cout << "| " << hare.get_energy() << "/" << tortoise.get_energy() << std::endl;

    bool raceStatus(false);

    while (true) {
        raceStatus = update();
        if (raceStatus)
            break;
        
        path.print();
        std::cout << "| " << hare.get_energy() << "/" << tortoise.get_energy() << std::endl;

    }
}

const bool Race::update() {
    int rate(random(10));
    const int tortoiseMovement(tortoise.movement(rate));
    rate = random(10);
    const int hareMovement(hare.movement(rate));

    if (path.get_hare_position() == path.get_tortoise_position())
        hare.bit();

    if (path.get_occupation(path.get_tortoise_position() + tortoiseMovement) == 3) {
        tortoise.get_snack();
        path.set_steps(path.get_tortoise_position(), 0);
    }

    if (path.get_occupation(path.get_hare_position() + hareMovement) == 3) {
        hare.get_snack();
        path.set_steps(path.get_hare_position(), 0);
    }
    
    const bool status(path.move(tortoiseMovement, hareMovement));
    return status;
}
