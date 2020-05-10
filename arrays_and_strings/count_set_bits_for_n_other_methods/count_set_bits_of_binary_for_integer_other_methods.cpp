#include <iostream>

using namespace std;

int countSetBitsMethod1(int n) {
    int count = 0;

    while(n) {
        count += n & 1;
        n >>= 1;
    }

    return count;
}

// Method 1's recursive version
int countSetBitsMethod2(int n) { 
    if (n == 0) {
        return 0;
    }
    else {
        return (n & 1) + countSetBitsMethod2(n >> 1);
    }
}

// Brian Kernighan's Algorithm
int countSetBitsMethod3(int n) { 
    int count = 0;
    while (n) {
        n = n & (n-1);
        count++;
    }
    return count;
}

// Method 3's recursive version
int countSetBitsMethod4(int n) { 
    if (n == 0) {
        return 0;
    }
    return 1 + countSetBitsMethod4(n & (n-1));
}


// using lookup table
int bitsSetTable256[256];

void initializeLookupTable() {
    bitsSetTable256[0] = 0;
    for (int i = 0; i < 256; i++) {
        bitsSetTable256[i] = (i&1) + bitsSetTable256[i/2];
    }
}
int countSetBitsMethod5(int n) {
    return (bitsSetTable256[n & 0xff] + // Mask 8 bits from right using(0xff = 255)
            bitsSetTable256[(n >> 8) & 0xff] + // shift 8 bits and mask
            bitsSetTable256[(n >> 16) & 0xff] + // shift 8+8 bits and mask
            bitsSetTable256[n >> 24]); // shift 8+8+8 bits to get remaining bits 
}


// Using nibble
int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
                        1, 2, 2, 3, 2, 3, 3, 4 };

int countSetBitsMethod6(int n) {
    int nibble = 0; // Reset
    if (n == 0) {
        return num_to_bits[0];
    }
    // Mask last 4 bits
    nibble = n & 0xf;

    // Add number of set bits for current nibble with recursive a call passing right shifted 4 bits
    return num_to_bits[nibble] + countSetBitsMethod6(n>>4); // 
}

int main() {
    int n = 7;
    cout << "Bits counted: \n";

    // Method 1: 
    cout << countSetBitsMethod1(n) << "\n";

    // Method 2: 
    cout << countSetBitsMethod2(n) << "\n";

    // Method 3: 
    cout << countSetBitsMethod3(n) << "\n";

    // Method 4: 
    cout << countSetBitsMethod4(n) << "\n";

    // Method 5:
    initializeLookupTable();
    cout << countSetBitsMethod5(n) << "\n";

    // Method 6:
    cout << countSetBitsMethod6(n) << "\n";

    return 0;
}