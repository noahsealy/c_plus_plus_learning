#include <iostream>

using namespace std;

int main() {

    // decimal is base 10, 0-9. An example is 10
    // hexdecimal is base 16, 0-9, A-F. An example is FF
    // we use hex to represent colors, memory addresses, etc...
    // 0xFF is 255 in decimal
    // 0x10 is 16 in decimal
    // 0x11 is 17 in decimal
    // 0x12 is 18 in decimal
    // 0x13 is 19 in decimal
    // 0x14 is 20 in decimal
    // rgb is a color code, it's a combination of red, green, and blue. We use 6 hex digits to represent the color.
    // the first 2 digits represent the red, the next 2 digits represent the green, and the last 2 digits represent the blue.
    // 0xFF0000 is red, 0x00FF00 is green, 0x0000FF is blue
    // 0x000000 is black, 0xFFFFFF is white
    
    int number{0};

    // binary
    number = 0b11111111;
    cout << "Binary number: " << number << endl;

    // hexadecimal
    number = 0xFF00FF;
    cout << "Hexadecimal number: " << number << endl;

    unsigned int positive_number{1000};
    cout << "Positive number: " << positive_number << endl;

    int big_number = 1000000;
    // short only goes up to 32767 (2 bytes), so it will overflow, whereas int can go up to 2147483647 (4 bytes)
    short another{big_number};
    cout << "Big number narrowed down to a short: " << another << endl;

    return 0;
    
}