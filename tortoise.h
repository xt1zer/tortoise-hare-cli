#include <iostream>
using namespace std;

class Tortoise {

private:

    int energy;
    bool down;

public:
    const int movement(const int &);
    const int get_energy() const;
    const int set_energy(const int &);
    void restore_energy();

    Tortoise();
};