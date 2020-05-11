#include <iostream>

using namespace std;


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


int main() {
    int n = 4;
    // Method 1: 
    printf("Total set bit count is %d.", countSetBitsMethod1(n));

    return 0;
}