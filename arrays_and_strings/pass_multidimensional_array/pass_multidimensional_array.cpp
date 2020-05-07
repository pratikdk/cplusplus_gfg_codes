#include <iostream>

using namespace std;

const int M = 3;
const int N = 3;

void print1(int arr[M][N]) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << "\n";
}

void print2(int arr[][N], int m) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << "\n";
}

// void print3(int m, int n, int arr[][n]) {
//     int i, j;
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             cout << arr[i][j] << " ";
//         }
//     }
//     cout << "\n";
// }

void print4(int *arr, int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << *((arr + i*n) + j) << " ";
        }
    }
    cout << "\n";
}


int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Method 1: When both dimensions are available globally (either as a macro or as a global constant).
    print1(arr);

    // Method 2: When only second dimension is available globally (either as a macro or as a global constant).
    print2(arr, 3);

    // Method 3: If compiler is C99 compatible, to support variable sized arrays to be passed simply by specifying the variable dimensions 
    // print3(3, 3, arr);

    // Method 4:  Using a single pointer In this method, we must typecast the 2D array when passing to function.
    print4((int *)arr, 3, 3);

     
    return 0;
}