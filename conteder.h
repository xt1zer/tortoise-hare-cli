#pragma once

class Contender {

protected:

    char avatar;
    bool down;
    unsigned short int energy;
    unsigned short int position;

public:

    const char get_avatar() const;
    const unsigned short int get_energy() const;
    void get_medical_help();
    const unsigned short int get_position() const;
    void get_snack();
    const bool is_down() const;
    void set_energy(const short int &);
    void set_position(const short int &);
    void update_position();

};
