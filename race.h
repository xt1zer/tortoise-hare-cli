#include <iostream>
#include "tortoise.h"
#include "hare.h"
#include "path.h"
using namespace std;

class Race {
private:


public:
    const int update();
    Path path;
    Hare hare;
    Tortoise tortoise;

};
