#pragma once

class Contender {

protected:

    char avatar;
    bool down;
    short int energy;
    short int position;

public:

    Contender();

    const char get_avatar() const;
    const short int get_energy() const;
    void get_medical_help();
    const short int get_position() const;
    void get_snack();
    const bool is_down() const;
    void set_energy(const short int &);
    void set_position(const short int &);
    void update_position();

};
