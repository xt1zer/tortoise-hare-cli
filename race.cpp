#include "race.h"
#include "random.h"

const int Race::update() {
    if (hare.get_energy() == 0) {
        hare.set_energy(10);
        return 0;
    }

    if (tortoise.get_energy() == 0) {
        tortoise.set_energy(10);
        return 0;
    }

    int rate(random(10));
    const int tortoiseMovement(tortoise.movement(rate));
    rate = random(10);
    int hareMovement(hare.movement(rate));

    if (path.get_hare_position() == path.get_tortoise_position())
        hare.set_energy(-3);

    int status(path.move(tortoiseMovement, hareMovement));

    if (path.get_occupation(path.get_tortoise_position()) == 3) {
        tortoise.restore_energy();
        path.set_steps(path.get_tortoise_position(), 0);
    }

    if (path.get_occupation(path.get_hare_position()) == 3) {
        hare.restore_energy();
        path.set_steps(path.get_hare_position(), 0);
    }
}


