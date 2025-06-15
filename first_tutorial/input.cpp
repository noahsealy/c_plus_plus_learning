#include <iostream>

using namespace std;

int main () {
    cout << "Enter values for x and y: " << endl;
    int x, y;
    cin >> x >> y;
    cout << "You entered: " << x << " and " << y << endl;
    int z = x + y;
    cout << "x + y = " << z << endl;

    return 0;
}