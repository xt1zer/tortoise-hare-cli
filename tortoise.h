#pragma once

class Tortoise {

private:

    int energy;
    bool down;

public:
    
    Tortoise();
    
    const bool is_down() const;
    const int movement(const int &);
    const int get_energy() const;
    void set_energy(const int &);
    void restore_energy();
    void revive();

};
