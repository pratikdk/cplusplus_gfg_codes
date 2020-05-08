#include <iostream>

using namespace std;

// Method 1.
int fib_method1(int n) {
    if (n <= 1) {
        return n;
    }
    // Recursion
    return fib_method1(n-1) + fib_method1(n-2);
}


// Method 2.
int fib_method2(int n) {
    int f[n+1];

    f[0] = 0;
    f[1] = 1;

    for (int i=2; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}


// Method 3.
int fib_method3(int n) {
    int a=0, b=1, c;
    if (n == 0) {
        return a;
    }
    for (int i=2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


// Method 4.
void method4_power(int F[][2], int n);
void multiply(int F[][2], int M[][2]);

int fib_method4(int n) {
    if (n == 0) {
        return 0;
    }
    int F[][2] = {{1, 1}, {1, 0}};

    method4_power(F, n-1);

    return F[0][0];
}

void method4_power(int F[][2], int n) {
    int M[][2] = {{1, 1}, {1, 0}};

    for (int i=2; i <= n; i++) {
        multiply(F, M);
    }
}

void multiply(int F[][2], int M[][2]) { // Performs dot product between F and M
    int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
    int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
    int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
    int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}


// Method 5.
void method5_power(int F[][2], int n);

int fib_method5(int n) { 
    if (n == 0) {
        return 0;
    }
    int F[][2] = {{1, 1}, {1, 0}};

    method5_power(F, n-1);

    return F[0][0];
}

void method5_power(int F[][2], int n) {
    if (n==0 || n==1) {
        return;
    }
    int M[][2] = {{1, 1}, {1, 0}};

    method5_power(F, n/2);
    multiply(F, F);

    if (n%2 != 0) {
        multiply(F, M);
    }
}


int main() {
    int n = 9;

    // 1. Using recursion
    cout << fib_method1(n) << "\n";

    // 2. Using dynamic Programming
    cout << fib_method2(n) << "\n";

    // 3. Space Optimized (Storing only previous 2 numbers)
    cout << fib_method3(n) << "\n";

    // 4. Using power of the matrix {{1,1},{1,0}}; Matrix Multiplication
    cout << fib_method4(n) << "\n";

    // 5. Optimized Method 4; recursive multiplication
    cout << fib_method5(n) << "\n";
}