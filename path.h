#pragma once
#include <iostream>
#include "step.h"

class Path {

private:

    Step steps[70];

public:
    
    Path();

    void print() const;
    const bool move(const int &, const int &);
    const int get_tortoise_position() const;
    const int get_hare_position() const;
    const int get_occupation(const int &) const;
    void set_steps(const int &, const int &);

};
