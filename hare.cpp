#include "hare.h"

Hare::Hare() {
    energy = 17;
    avatar = 'H';
}

void Hare::bit() {
    set_energy(-3);
}

const int Hare::update_position(const int & possibility) {
    if (is_down()) {
        get_medical_help();
        down = false;
    }
    else {
        if (possibility >= 0 && possibility <= 2)
            return 3;

        if (possibility > 2 && possibility <= 4) {
            set_energy(-3);
            return 9;
        }

        if (possibility > 4 && possibility <= 5)
            return -12;

        if (possibility > 5 && possibility <= 8) {
            set_energy(-1);
            return 1;
        }

        if (possibility > 8 && possibility <= 10)
            return -2;

        if (get_energy() <= 0)
            down = true;
    }

    return 0;
}
