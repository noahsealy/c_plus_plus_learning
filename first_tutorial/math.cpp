#include <iostream>

using namespace std;

int main() {
    // int x = 10;
    // int y = 3;
    // int z = x / y;

    int x = 10;
    // current value of x gets stored in y and then x is incremented
    int y = x++; // x is 11, y is 10
    cout << "y: " << y << " x: " << x << endl;
    // current value of x gets incremented and then the new value gets stored in q
    int q = ++x; // x is 12, q is 12
    std::cout << "q: " << q << " x: " << x << std::endl;

    double a = 10;
    double b = 5;
    double c = (a + 10) / (3 * b);
    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;


    return 0;
}