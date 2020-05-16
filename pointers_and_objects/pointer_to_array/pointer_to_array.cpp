#include <iostream>

using namespace std;

int main() {
    // One dimensional array
    int arr[] = {3, 5, 6, 7, 9};

    // Pointer to an integer
    int *pint;
    // Pointer to an entire array
    int (*parr)[5];

    // Make pint point to 0th element of arr
    pint = arr;

    // Make parr piont to array arr, while storing address of 0th element
    parr = &arr;

    // Same base address
    cout << "pint = " << pint << ", parr = " << parr << endl;
    // Print element
    cout << "*pint = " << *pint << ", *parr = " << *parr << endl;
    // Increment
    // [pint + 1] Moves pointer ahead of int
    // [parr + 1] Moves pointer ahead of array
    cout << "pint = " << (pint+1) << ", parr = " << (parr+1) << endl; 
    
    // Print sizes
    cout << "sizeof(pint) = " << sizeof(pint) <<
            ", sizeof(*pint) = " << sizeof(*pint) << endl;
    cout << "sizeof(parr) = " << sizeof(parr) <<
            ", sizeof(*parr) = " << sizeof(*parr) << endl;

    return 0;
}