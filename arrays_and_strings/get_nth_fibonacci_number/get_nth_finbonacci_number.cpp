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
    cout << "\nFibonacci number at index "<< n << " is: " << *(fibarr + n) << "\n";

    return 0;
}


/*
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040 1346269 2178309 3524578 5702887 9227465 14930352 24157817 39088169 63245986 102334155 165580141 267914296 433494437 701408733 1134903170 1836311903 -1323752223 512559680 -811192543

Fibonacci number at index 9 is: 34
*/