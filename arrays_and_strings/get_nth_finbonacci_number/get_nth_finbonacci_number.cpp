#include <iostream>

using namespace std;

int* generate_fibonacci_sequence(int sequence_limit) {

    int *fib_arr = new int[sequence_limit];
    // Seed values
    fib_arr[0] = 0;
    fib_arr[1] = 1;
    
    for (int i = 2; i < sequence_limit; i++) {
        fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
    }

    return fib_arr;
}

int main() {
    int sequence_limit = 50;

    int *fibarr = generate_fibonacci_sequence(sequence_limit);

    for (int i = 0; i < sequence_limit; i++) {
        cout << *(fibarr + i) << " ";
    }

    // get nth fibonacci number
    int n = 9;
    cout << "\n" << *(fibarr + n) << "\n";

    return 0;
}