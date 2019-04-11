#pragma once
#include <iostream>
#include "occupation.h"

class Step {

private:

    Occupation occupation;

public:

    void set_occupation(const int &);
    const int get_occupation() const;
};
