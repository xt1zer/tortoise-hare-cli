#pragma once
#include "tortoise.h"
#include "hare.h"
#include "path.h"

class Race {
private:
    
    bool over;
    
    Path path;
    Hare hare;
    Tortoise tortoise;

public:

    Race();
    
    void print() const;
    void update();
    void winner() const;

};
