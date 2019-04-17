#pragma once
#include "step.h"
#include "game.h"
#include "constants.h"

class Path {

private:

    Step * steps;

public:
    
    Path();
    ~Path();

    void print() const;
    const bool has_snack(int) const;
    const char get_occupation(const int &) const;
    void set_collision(const int &);
    void set_empty(int);
    void set_position(int, const char &);

};
