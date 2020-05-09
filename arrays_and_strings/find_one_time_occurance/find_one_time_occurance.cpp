#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int find_single_method1(int ar[], int ar_size) {
    int res = ar[0];
    for (int i=1; i < ar_size; i++) {
        res = res ^ ar[i];
    }

    return res;
}

int find_single_method2(int ar[], int ar_size) {
    int sum1=0, sum2=0;
    int i;
    map<int, int> m;

    for(i=0; i<ar_size; i++) {
        if (m[ar[i]] == 0) {
            // Increment only once for unique elements
            sum1 += ar[i];
            m[ar[i]] ++;
            //cout << "Element found: " << ar[i] << ", Updated count: " << m[ar[i]] << "\n";
        }
        sum2 += ar[i];
    }
    //Array [] : [a, a, b, b, c, c, d]
    //Mathematical Equation = 2*(a+b+c+d) - (a + a + b + b + c + c + d)
    return 2 * (sum1) - (sum2);
}

int main() {
    int ar[] = {2, 3, 5, 4, 5, 3, 4};
    int ar_size = sizeof(ar) / sizeof(ar[0]);

    cout << "Element occuring once : " << "\n";

    // Method 1: Using XOR
    cout << find_single_method1(ar, ar_size) << "\n";

    // Method 2: Using 2*set(sum(ar)) + sum(ar)
    cout << find_single_method2(ar, ar_size) << "\n";

    return 0;
}