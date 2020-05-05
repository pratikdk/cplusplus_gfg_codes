#include <iostream>

using namespace std;

int main() {
    cout << "For Loop" << endl;
    // For loop
    for (int i = 0; i < 5; i++) {
        cout << "Iternation number : " << i << "\n";
    }

    cout << "While Loop" << endl;
    // While loop
    int j = 0;
    while (j < 5) {
        cout << "Iternation number : " << j << "\n";
        j++;
    }

    cout << "Do-while Loop" << endl;
    // Do-while loop
    int z = 0;
    do {
        cout << "Iternation number : " << z << "\n";
        z++;
    } while (z < 5);

    return 0;
}