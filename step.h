#pragma once
#include <iostream>
#include "occupation.h"

class Step {

private:

    Occupation occupation;

public:

    Step();

    void has_snack();
    void set_snack();
    void set_empty();
    void set_occupation(const int &);
    const int get_occupation() const;
};
