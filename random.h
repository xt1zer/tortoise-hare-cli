#pragma once
#include <iostream>

const int random(const int & max) {
    double r = (float(rand()) / float(RAND_MAX));
    return int(r * max);
}
