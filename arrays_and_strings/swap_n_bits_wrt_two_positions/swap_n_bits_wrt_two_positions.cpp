#include <iostream>

using namespace std;

int swapBits(int n, int pos1, int pos2, int nbits) {
    int set1 = (n >> pos1) & ((1 << nbits)-1);
    int set2 = (n >> pos2) & ((1 << nbits)-2);
    int Xor = (set1 ^ set2);
    Xor = (Xor << pos1) | (Xor << pos2);
    int result = n ^ Xor;
    return result;
}

int main() {
    int n = 28;
    int pos1 = 0;
    int pos2 = 3;
    int nbits = 2;
    int res = swapBits(n, pos1, pos2, nbits);
    cout << "Result = " << res;
    return 0;
}