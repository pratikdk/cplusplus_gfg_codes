#include <bits/stdc++.h>

using namespace std;

void matchSubset(int arr[], int arrSize, int sum) {
    for (int i=1; i<(pow(2, arrSize)); i++) {
        int sum = 0;
        for (int j=0; j<arrSize; j++) {
            if ((i >> j) & 1) {
                sum += arr[j];
            }
        }
        if (sum == sum) {
            cout << "YES" << endl;
            return;
        }
    }
    // else print no
    cout << "NO" << endl;
}

int main() {
    int arr[] = {-1, 2, 4, 121};
    int sum = 5;
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    matchSubset(arr, arrSize, sum);

    return 0; 
}