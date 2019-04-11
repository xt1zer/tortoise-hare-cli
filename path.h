#pragma once
#include <iostream>
#include "step.h"

class Path {

private:

    Step steps[70];
    int tortoise_position;
    int hare_position;

public:
    
    Path();

    void print_path() const;
    const bool move(const int &, const int &);
    const int get_tortoise_position() const;
    const int get_hare_position() const;
    const int get_occupation(const int &) const;
    void set_steps(const int &, const int &);

};
