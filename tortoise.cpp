#include "tortoise.h"

Tortoise::Tortoise() : energy(20), down(false) {}

const bool Tortoise::is_down() const { return down; }

const int Tortoise::movement(const int & possibility) {
    if (down) {
        revive();
        down = false;
    }
    else {
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
                down = true;
            return 1;
        }
    }

    return 0;
}

const int Tortoise::get_energy() const { return energy; }

void Tortoise::set_energy(const int & c) {
    if (energy + c <= 0) {
        energy = 0;
        down = true;
    } 
    else if (energy + c >= 20)
        energy = 20;
    else
        energy += c;
}

void Tortoise::restore_energy() { energy = 20; }

void Tortoise::revive() { energy = 10; down = false; }
