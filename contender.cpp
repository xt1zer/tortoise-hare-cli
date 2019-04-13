#include "conteder.h"

const char Contender::get_avatar() const { return avatar; }

const unsigned short int Contender::get_energy() const { return energy; }

void Contender::get_snack() { set_energy(20); }

const unsigned short int Contender::get_position() const {
    return position;
}

void Contender::get_medical_help() {
    down = false;
    set_energy(10);
}

const bool Contender::is_down() const { return down; }

void Contender::set_energy(const short int & c) {
    if (energy + c <= 0) {
        energy = 0;
        down = true;
    }

    else if (energy + c >= 20)
        energy = 20;
    else
        energy += c;
}

void Contender::set_position(const short int & position) { 
    this->position = position;
}
