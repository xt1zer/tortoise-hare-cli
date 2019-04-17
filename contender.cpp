#include "conteder.h"

Contender::Contender() {
    avatar = 0;
    energy = 20;
    down = false;
    position = 0;
}

const char Contender::get_avatar() const { return avatar; }

const short int Contender::get_energy() const { return energy; }

void Contender::get_snack() { set_energy(20); }

const short int Contender::get_position() const {
    return position;
}

void Contender::get_medical_help() {
    down = false;
    set_energy(10);
}

const bool Contender::is_down() const { return down; }

void Contender::set_energy(const short int & value) {
    if (energy + value <= 0) {
        energy = 0;
        down = true;
    }

    else if (energy + value >= 20)
        energy = 20;
    else
        energy += value;
}

void Contender::set_position(const short int & value) { 
    if (position + value <= 0)
        position = 0;
    else if (position + value >= 69)
        position = 69;
    else
        position += value;
}
