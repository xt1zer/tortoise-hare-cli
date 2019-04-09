#include <ctime>
#include "race.h"
using namespace std;

int main(){
    cout << "Hello!" << endl;

    srand(unsigned(time(NULL)));

    Race race;
    race.path.print_path();
    cout << "| " << race.hare.get_energy() << "/" << race.tortoise.get_energy() << endl;

    int status(0);

    while (status != 1) {
        status = race.update();
        if (status == 1)
            break;
        race.path.print_path();
        cout << "| " << race.hare.get_energy() << "/" << race.tortoise.get_energy() << endl;

    }


    return 0;
}
