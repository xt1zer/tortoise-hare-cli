#include "hare.h"

Hare::Hare() { set_energy(20); down = false; avatar = 'H'; }

void Hare::bit() {
    set_energy(-3);
}

const int Hare::movement(const int & possibility) {
    if (down) {
        get_medical_help();
        down = false;
    }
    else {
        if (possibility >= 0 && possibility <= 5) {
            set_energy(energy - 2);
            if (get_energy() <= 0)
                down = true;
            return 3;
        }

        if (possibility > 5 && possibility <= 7)
            return -6;

        if (possibility > 7 && possibility <= 10) {
            set_energy(energy - 1);
            if (get_energy() <= 0)
                down = true;
            return 1;
        }
    }

    return 0;
}
