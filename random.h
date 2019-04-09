#include <iostream>

const int random(const int & max) {
    double r = (float(rand()) / float(RAND_MAX) + float(1));
    return int(r*max);
}
