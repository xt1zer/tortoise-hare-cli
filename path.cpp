#include "path.h"
using std::cout;
using std::endl;

Path::Path() {
    tortoise_position = hare_position = 0;
    
    for (int k(1); k < 70; ++k) {
        if (k % 10)
            steps[k].set_occupation(0);
        else
            steps[k].set_occupation(3);
    }
}

const int Path::get_occupation(const int & s) const {
    return steps[s].get_occupation();
}

void Path::set_steps(const int & pos, const int & value) {
    if (pos >= 0 && pos < 70 && value >= 0 && value < 4)
        steps[pos].set_occupation(value);
}

void Path::print() const {
    for (int k(0); k < 70; ++k) {
        switch (steps[k].get_occupation()) {
        case 0:
            cout << ".";
            break;

        case 1:
            cout << "T";
            break;

        case 2:
            cout << "H";
            break;

        case 3:
            cout << "@";
            break;

        case 4:
            cout << "#";
            break;

        default:
            cout << "e";
            break;
        }
    }
}

const bool Path::move(const int & newTorPos, const int & newHarePos) {
    if (tortoise_position + newTorPos >= 70) {
        steps[tortoise_position].set_occupation(0);
        steps[69].set_occupation(1);
        tortoise_position = 69;
        print();

        cout << endl << "T Wins!" << endl;
        return true;
    }

    if (hare_position + newHarePos >= 70) {
        steps[hare_position].set_occupation(0);
        steps[69].set_occupation(2);
        hare_position = 69;
        print();

        cout << endl << "H Wins!" << endl;
        return true;
    }

    steps[tortoise_position].set_occupation(0);
    steps[hare_position].set_occupation(0);

    if (tortoise_position + newTorPos > 0) {
        steps[tortoise_position + newTorPos].set_occupation(1);
        tortoise_position += newTorPos;
    }
    else {
        steps[0].set_occupation(1);
        tortoise_position = 0;
    }

    if (hare_position + newHarePos > 0) {
        steps[hare_position + newHarePos].set_occupation(2);
        hare_position += newHarePos;
    }
    else {
        steps[0].set_occupation(2);
        hare_position = 0;
    }

    return false;
}

const int Path::get_tortoise_position() const { return tortoise_position; }

const int Path::get_hare_position() const { return hare_position; }
