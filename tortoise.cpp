#include "tortoise.h"

Tortoise::Tortoise() :energy(20), down(false) {}

const int Tortoise::movement(const int & possibility) {
    if (possibility >= 0 && possibility <= 5) {
        set_energy(-2);
        if (energy <= 0)
            down = true;
        return 3;
    }

    if (possibility > 5 && possibility <= 7)
        return -6;

    if (possibility > 7 && possibility <= 10) {
        set_energy(-1);
        if (energy <= 0)
            return -1;
    }

    return -1;
}

const int Tortoise::get_energy() const { return energy; }

const int Tortoise::set_energy(const int & c) {
    if (energy + c <= 0){
        energy = 0;
        down = true;
        return 0;
    }
    else if (energy + c >= 20) {
        energy = 20;
        return 0;
    }
    else if (energy + c > 0 && energy + c < 20)
        energy += c;

    return 1;
}

void Tortoise::restore_energy() { energy = 20; }
