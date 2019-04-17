#pragma once

class Step {

private:

    char occupation;
    bool snack;

public:

    Step();

    const bool has_snack() const;
    void set_snack(const bool &);
    void set_empty();
    void set_occupation(const char &);
    const char get_occupation() const;
};
