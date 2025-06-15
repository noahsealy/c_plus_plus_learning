#include <iostream>

using namespace std;

template <typename T>
T square(T number) {
    return number * number;
}

// don't need to specify the type like below, 
// the template will automatically deduce the type, like above
// int square(int number) {
//     return number * number;
// }

// double square(double number) {
//     return number * number;
// }

// can also have templates for classes

template <typename T>
class Box {
    T length;
    public:
        Box(T l) : length(l) {}
        T calculateVolume() {
            return length * length * length;
        }
};

int main() {
    // can specify the type like below
    cout << square<int>(5) << endl;
    // or infer it
    cout << square(5.5) << endl;

    Box<int> box1(10);
    cout << "Volume of box1: " << box1.calculateVolume() << endl;

    Box<double> box2(10.5);
    cout << "Volume of box2: " << box2.calculateVolume() << endl;

    return 0;
}