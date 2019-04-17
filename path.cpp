#include <iostream>
#include "path.h"

Path::Path() {
    steps = new Step[width];

    steps[0].set_occupation('#');
    for (int k(9); k < width; k += 10) {
        steps[k].set_snack(true);
    }
}

Path::~Path() {
    delete[] steps;
}

const bool Path::has_snack(int position) const {
    if (position <= 0) position = 0;
    if (position >= width - 1) position = width - 1;
    return steps[position].has_snack();
}

const char Path::get_occupation(const int & s) const {
    return steps[s].get_occupation();
}

void Path::set_collision(const int & pos) {
    steps[pos].set_occupation('#');
}

void Path::set_empty(int position) {
    if (position >= width - 1) position = width - 1;
    steps[position].set_empty();
}

void Path::set_position(int pos, const char & value) {
    if (pos <= 0) pos = 0;
    if (pos >= width - 1) pos = width - 1;
    steps[pos].set_occupation(value);
}

void Path::print() const {
    for (int k(0); k < width; ++k) {
        if (steps[k].has_snack())
            std::cout << "@";
        else
            std::cout << steps[k].get_occupation();
    }
}
