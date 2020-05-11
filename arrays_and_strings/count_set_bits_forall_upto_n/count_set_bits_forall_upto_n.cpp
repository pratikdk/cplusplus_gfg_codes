#include <iostream>

using namespace std;

// Method 1
// Using divide by two binary number generation
int countSetBitsMethod1Util(int x);
int countSetBitsMethod1(int n) {
    int bitCount = 0;
    for (int i=0; i<=n; i++) {
        bitCount += countSetBitsMethod1Util(i);
    }
    return bitCount;
}
int countSetBitsMethod1Util(int x) {
    if (x <= 0) {
        return 0;
    }
    return (x % 2 == 0 ? 0 : 1) + countSetBitsMethod1Util(x/2);
}

// Method 2
// Bits get inverted after 2^i position(i: from rightmost side) in vertical sequence.
int countSetBitsMethod2(int n) {
    int i = 0;
    int ans = 0;
    while ((1 << i) <= n) {
        bool k = 0;
        int change = 1 << i; // take up vals like [1, 2, 4, 8, ...]
        for (int j=0; j<=n; j++) {
            ans += k;
            if (change==1) {
                k = !k; // flip the k(bit) when change == 1
                change = 1 << i; // reshift
            } else {
                change--;
            }
        }
        i++;
    }
    return ans;
}

// Method 3
// Using bit chunk Pattern
int getLeftmostBitPosition(int n);
int getNextLeftmostBitPosition(int n, int m);
int _countSetBitsUtilMethod3(int n, int m);

int countSetBitsMethod3(int n) {
    int m = getLeftmostBitPosition(n);
    return _countSetBitsUtilMethod3(n, m);
}
int getLeftmostBitPosition(int n) {
    int m = 0;
    while(n > 1) {
        n = n >> 1;
        m++;
    }
    return m;
}
int getNextLeftmostBitPosition(int n, int m) {
    int temp = 1 << m;
    while (n < temp) {
        temp = temp >> 1;
        m--;
    }
    return m;
}
int _countSetBitsUtilMethod3(int n, int m) {
    if (n == 0) {
        return 0;
    }
    m = getNextLeftmostBitPosition(n, m);
    if (n == (1 << (m+1)) - 1) { // if number are 1, 3, 7, 15 etc, [all bits active]
        return (m+1) * (1<<m);
    }
    // For rest for the number forms
    n = n - (1 << m);
    return (n+1) + countSetBitsMethod3(n) + m * (1 << (m-1)); 
}

int main() {
    int n = 4;
    // Method 1: 
    printf("Total set bit count is %d.", countSetBitsMethod1(n));
    // Method 2: 
    printf("\nTotal set bit count is %d.", countSetBitsMethod2(n));
    // Method 3: 
    printf("\nTotal set bit count is %d.", countSetBitsMethod3(n));
    return 0;
}