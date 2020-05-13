#include <bits/stdc++.h>

using namespace std;

void intro() {
    int var = 20;
    int *ptr;
    ptr = &var;
    
    cout << "Value at &var = " << &var << "\n";
    cout << "Value at var = " << *ptr << "\n";
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}

// Pass by value
int square1(int n) {
    cout << "Address of n in square1(): " << &n << "\n";
    n = n * n;
    return n;
}
// Pass by reference with pointer arguments
void square2(int *n) {
    cout << "Address of n in square2(): " << n << "\n";
    *n = *n * *n;
}
// Pass by reference with reference arguments
void square3(int &n) {
    cout << "Address of n in square3(): " << &n << "\n";
    n = n * n;
}
void callByPassBy() {
    // Call by value
    int n1 = 8;
    cout << "Address of n1 in callByPassBy(): " << &n1 << "\n";
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "No change in n1: " << n1 << "\n";

    // Call by reference with Pointer Arguments
    int n2 = 8;
    cout << "Address of n2 in callByPassBy(): " << &n2 << "\n";
    square2(&n2);
    cout << "Square of n2: " << n2 << "\n";
    cout << "Change reflected in n2: " << n2 << "\n";

    //Call by Reference with Reference Arguments
    int n3 = 8;
    cout << "Address of n3 in callByPassBy(): " << &n3 << "\n";
    square3(n3);
    cout << "Square of n3: " << n3 << "\n";
    cout << "Change reflected in n3: " << n3 << "\n";

}

void pointerArithmetic() {
    int v[3] = {10, 100, 200};
    int *ptr;
    ptr = v;
    cout << "Elements of the array are: "; 
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl; 
    cout << "ptr with loop to print array using ptr++: \n";
    for (int i = 0; i < 3; i++) {
        cout << "Value at ptr = " << ptr << "\n";
        cout << "Value at *ptr = " << *ptr << "\n";
        ptr++;
    }
}

// Void Pointers
void increase(void *data, int size) {
    if (size == sizeof(char)) {
        // Cast down
        char *ptrChar;
        ptrChar = (char *) data;
        (*ptrChar)++;
        cout << "*data points to a char" << "\n";
    } else if (size == sizeof(int)) {
        // Cast down
        int *ptrInt;
        ptrInt = (int *) data;
        (*ptrInt)++;
        cout << "*data points to a int" << "\n";
    }
}
void voidPointer() {
    char c = 'x';
    int i = 10;

    increase(&c, sizeof(c));
    cout << "The new value of c is: " << c << "\n";
    increase(&i, sizeof(i));
    cout << "The new value of i is: " << i << "\n";
}

int main() {
    intro();
    callByPassBy();
    pointerArithmetic();
    voidPointer();
    return 0;
}