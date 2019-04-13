#pragma once
#include <iostream>
#include "tortoise.h"
#include "hare.h"
#include "path.h"

class Race {
private:
    
    bool over;
    
    Hare hare;
    Tortoise tortoise;

public:
    Path path;
    
    Race(const int &);
    
    const bool is_over() const;
    void print() const;
    const bool update();
    void winner() const;

};
