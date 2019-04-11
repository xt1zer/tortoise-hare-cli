#pragma once

class Hare {

private:

    int energy;
    bool down;

public:
    
    Hare();

    const bool is_down() const;
    const int movement(const int &);
    const int get_energy() const;
    void set_energy(const int &);
    void restore_energy();
    void revive();

};
