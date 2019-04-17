#include "tortoise.h"

Tortoise::Tortoise() {
    avatar = 'T';
}

const int Tortoise::update_position(const int & possibility) {
    if (down) {
        get_medical_help();
        down = false;
    }
    else {
        if (possibility >= 0 && possibility <= 5) {
            set_energy(-2);
            return 3;
        }

        if (possibility > 5 && possibility <= 7)
            return -6;

        if (possibility > 7 && possibility <= 10) {
            set_energy(-1);
            return 1;
        }

        if (get_energy() <= 0)
            down = true;
    }

    return 0;
}
