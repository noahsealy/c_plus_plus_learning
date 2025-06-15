#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    // time(nullptr) returns the current time in seconds since Jan 1 1970
    long elapsed_time = time(nullptr);
    // srand() is a function that seeds the random number generator
    srand(elapsed_time);

    // rand() is a function that returns a random number
    // % 10 is a modulus operator that returns the remainder of the division, it acts as the upper bound of the random number
    int number = rand() % 10;
    cout << "Random number: " << number << endl;

    return 0;    
}