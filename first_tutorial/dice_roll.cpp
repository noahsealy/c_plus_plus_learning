#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed the random number generator
    srand(time(nullptr));

    int minValue = 1;
    int maxValue = 6;
    int dice_roll = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << "Dice roll: " << dice_roll << endl;

    return 0;
}