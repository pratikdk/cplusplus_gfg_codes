#include <iostream>

using namespace std;

int main () {
    if (1) {
        label_1: printf("Hello ");

        goto label_2;
    }
    else {
        goto label_1;

        label_2: printf("Geeks");
    }

    return 0;
}