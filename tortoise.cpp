#include "tortoise.h"

Tortoise::Tortoise() { set_energy(20); down = false; avatar = 'T'; }

const int Tortoise::movement(const int & possibility) {
    if (down) {
        get_medical_help();
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
