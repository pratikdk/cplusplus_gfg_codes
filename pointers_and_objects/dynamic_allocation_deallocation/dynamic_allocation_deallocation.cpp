#include <iostream>

using namespace std;

int main () {
    // Pointer initialization with NULL
    int *p = NULL;
    // Dynamic memory request using new
    p = new(nothrow) int; // Instead of throwing bad_allow set as null
    if (!p) { // handle null
        cout << "Allocation of memory failed\n";
    } else {
        *p = 29; // Store value at allocated memory
        cout << "Value of p: " << *p << "\n";
    }

    // Another memory request
    float *r = new float(75.25);
    cout << "Value of *r: " << *r << "\n";

    // Request block(array) of memory 
    int *q = new(nothrow) int[5];
    if (!q) {
        cout << "Allocation of memory failed\n";
    } else {
        for (int i=0; i<5; i++) {
            q[i] = i+1;  // Assign value of subaddresses in allocated mem block
        }
        cout << "Value stored in block of memory:\n";
        for (int i=0; i<5; i++) {
            cout << q[i] << " ";
        }
    }

    // Free the allocated memory
    delete p;
    delete r;
    // free the block of allocated memory
    delete[] q;

    return 0;
}