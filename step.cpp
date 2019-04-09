#include "step.h"

void Step::set_occupation(const int & p) {
    switch (p) {
    case 0:
        occupation = empty;
        break;

    case 1:
        occupation = tortoise;
        break;

    case 2:
        occupation = hare;
        break;

    case 3:
        occupation = snack;
        break;

    default:
        cout << "ERROR!" << endl;
        break;
    }
}

const int Step::get_occupation() const {
    return occupation;
    return -1;
}
