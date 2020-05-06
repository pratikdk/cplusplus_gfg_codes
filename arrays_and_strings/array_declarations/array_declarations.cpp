#include <iostream>

using namespace std;

int main () {
    int arr[3]; 
    arr[0] = 5;
    arr[3/2] = 2;
    arr[2] = arr[1];

    //No Index Out of bound Checking
    printf("No index outof bounds checking: \n");
    cout << arr[3] << " ";
    cout << arr[-2] << " ";

    // Invalid
    // int arr2[2] = { 10, 20, 30, 40, 50 };

    int array_size = *(&arr + 1) - arr;
    
    printf("\nElements:\n");
    for (int i = 0; i < array_size; i++) {
        cout << arr[i] << "\n";
    }

    printf("Addresses:\n");
    for (int i = 0; i < array_size; i++) {
        cout << &arr[i] << "\n";
    }

}