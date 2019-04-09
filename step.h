#include <iostream>
#include "occupation.h"
using namespace std;

class Step {

private:

    Occupation occupation;

public:

    void set_occupation(const int &);
    const int get_occupation() const;
};
