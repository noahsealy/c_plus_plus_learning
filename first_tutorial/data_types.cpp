#include <iostream>

using namespace std;

int main() {
    double price = 99.99;
    float interest_rate = 3.67f;
    long file_size = 90000L;
    char letter = 'A';
    bool is_valid = false;

    // implicit conversion
    auto result = 10.2f;

    // brace initialization
    // will initialize to 0, instead of just a random memory value
    int brace_init {};
    // will initialize to 1, instead of 1.2, as it's putting a double into an int
    int brace_init_2 {1.2};
    return 0;
}