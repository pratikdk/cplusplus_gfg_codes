#include <iostream>

using namespace std;

int* method1() {
    int *arr = new int[10];

    arr[0] = 10;
    arr[1] = 20;

    return arr;
}

int* method2() {
    static int arr[10];

    arr[0] = 10;
    arr[1] = 20;

    return arr;
}

struct arrwrap {
    int arr[10];
};

struct arrwrap method3() {
    struct arrwrap x;

    x.arr[0] = 10;
    x.arr[1] = 20;

    return x;
}

int main() {
    int *ptr;

    // 1. Using dynamically allocated array
    ptr = method1();

    // 2. Using static array:
    ptr = method2();

    // 3. Using struct:
    struct arrwrap x = method3();

}