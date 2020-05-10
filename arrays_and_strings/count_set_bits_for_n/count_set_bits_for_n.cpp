
#include <iostream>

using namespace std;

void binary_conversion_count(int num, int *set_bits);
int count_set_bits_method1(int num) {
    int set_bits = 0;
    
    binary_conversion_count(num, &set_bits);
    return set_bits;
}

void binary_conversion_count(int num, int *set_bits) {
    if (num < 1) {
        return;
    }
    //cout << "\nDividing : " << num;
    if (num%2 != 0) {
        //cout << " 1";
        *set_bits += 1;
    }
    //cout << " 0";
    num = num / 2;
    binary_conversion_count(num, set_bits);
}



int main() {
    int num = 339;
    int num2 = 13;

    // Method 0: Personal Method
    cout << "\nNo. set bits for " << num << " : " << count_set_bits_method1(num);
    cout << "\nNo. set bits for " << num2 << " : " << count_set_bits_method1(num2);
    cout << "\nNo. set bits for " << 6 << " : " << count_set_bits_method1(6);

    return 0;
}