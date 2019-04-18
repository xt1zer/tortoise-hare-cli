#include "race.h"
#include "random.h"

Race::Race(): over(false) {
    print();

    while (!over) {
        update();
        print();
    }

    winner();
}

void Race::print() const {
    path.print();
    std::cout << "| " << hare.get_energy() << "/" << tortoise.get_energy() << std::endl;
}

void Race::update() {
    int rate(random(10));
    const int tortoiseMovement(tortoise.update_position(rate));
    rate = random(10);
    const int hareMovement(hare.update_position(rate));

    if (path.has_snack(tortoise.get_position() + tortoiseMovement)) {
        tortoise.get_snack();
        path.set_empty(tortoise.get_position() + tortoiseMovement);
    }

    if (path.has_snack(hare.get_position() + hareMovement)) {
        hare.get_snack();
        path.set_empty(hare.get_position() + hareMovement);
    }

    if (tortoise.get_position() + tortoiseMovement >= width - 1 && hare.get_position() + hareMovement >= width - 1) {
        path.set_position(tortoise.get_position(), '.');
        path.set_position(hare.get_position(), '.');
        path.set_collision(width - 1);
        tortoise.set_position(width - 1);
        hare.set_position(width - 1);
        over = true;
        return;
    }

    if (tortoise.get_position() + tortoiseMovement >= width - 1) {
        path.set_position(tortoise.get_position(), '.');
        path.set_position(width - 1, 'T');
        tortoise.set_position(width - 1);
        over = true;
        return;
    }

    if (hare.get_position() + hareMovement >= width - 1) {
        path.set_position(hare.get_position(), '.');
        path.set_position(width - 1, 'H');
        hare.set_position(width - 1);
        over = true;
        return;
    }

    path.set_position(tortoise.get_position(), '.');
    path.set_position(hare.get_position(), '.');

    if (tortoise.get_position() + tortoiseMovement > 0) {
        path.set_position(tortoise.get_position() + tortoiseMovement, 'T');
        tortoise.set_position(tortoiseMovement);
    }
    else {
        path.set_position(0, 'T');
        tortoise.set_position(-(width - 1));
    }

    if (hare.get_position() + hareMovement > 0) {
        path.set_position(hare.get_position() + hareMovement, 'H');
        hare.set_position(hareMovement);
    }
    else {
        path.set_position(0, 'H');
        hare.set_position(-(width - 1));
    }

    if (hare.get_position() == tortoise.get_position()) {
        path.set_collision(hare.get_position());
        hare.bit();
    }

    return;
}

void Race::winner() const {
    if (tortoise.get_position() == hare.get_position())
        std::cout << "Tie!\n";
    else
        std::cout << path.get_occupation(width - 1) << " wins!\n";
}
