#pragma once
#include <iostream>
#include "tortoise.h"
#include "hare.h"
#include "path.h"

class Race {
private:


public:
    
    Race();
    
    Path path;
    Hare hare;
    Tortoise tortoise;
    
    const bool update();

};
