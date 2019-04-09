#include <iostream>
#include "step.h"
using namespace std;

class Path {

private:

    Step steps[70];
    int tortoise_position;
    int hare_position;

public:

    void print_path() const;
    const int move(const int &, const int &);
    const int get_tortoise_position() const;
    const int get_hare_position() const;
    const int get_occupation(const int &) const;

    Path();
};