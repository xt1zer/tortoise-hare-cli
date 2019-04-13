#include "step.h"

Step::Step() : occupation('.'), snack(false) {}

const bool Step::has_snack() const {
    return snack;
}

void Step::set_snack(const bool & s) { snack = s; }

void Step::set_occupation(const int & p) {
    switch (p) {
    case 1:
        occupation = 'T';
        break;

    case 2:
        occupation = 'H';
        break;

    case 3:
        occupation = '#';
        break;

    default:
        std::cout << "ERROR!" << std::endl;
        break;
    }
}

const int Step::get_occupation() const { return occupation; }

void Step::set_empty() { occupation = '.'; }
