#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    std::cout << "Before swap: " << a << " " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;

    std::cout << "After swap: " << a << " " << b << std::endl;

    return 0;
}