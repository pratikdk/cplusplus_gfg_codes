#include <iostream>

using namespace std;

struct demo {
    int a;
};

int main() {
    int x = 5;
    int y = 6;
    
    // Stuct object
    demo d;
    d.a = 12;
    cout << "d.a = " << d.a << endl;

    // Pointer Reintialization
    int *p;
    p = &x;
    p = &y;

    // Invalid: References Reintialization
    int &r = x;
    // &r = y  // cannot modify the address
    r = y; // Value at address can be modified

    // NUll pointer
    p = NULL;
    // Invalid: NUll References 
    // &r = NULL;

    p++; // Points to next memory location
    r++; // x values becomes 7

    cout << "Pointer: " << &p << " " << &x << endl; // Different address
    cout << "Reference: " << &r << " " << &x << endl; // Same address

    demo *qp = &d;
    demo &qr = d;

    qp->a = 8;
    //qp.a = 8;
    qr.a = 8;
    //qr-> = 8

    cout << p << endl; // Prints the address
    cout << r << endl; // Prints the value

    return 0;
}