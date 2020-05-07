#include <iostream>

using namespace std;

int main() {
    cout << "Dynamic 2D array allocation:" << "\n\n";

    int r=3, c=4, count=0, len=0, i, j;
    int **darr, *ptr;

    cout << "1. Using single pointer" << "\n";
    count = 0;
    int *arr = (int *)malloc(sizeof(int) * r*c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            *(arr + i*c + j) = ++count;
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            cout << *(arr + i*c + j) << " ";
        }
    }


    cout << "\n\n2. Using an array of pointers" << "\n";
    count = 0;
    int *arr2[r];
    for (i=0; i<r; i++) {
        arr2[i] = (int *)malloc(c * sizeof(int));
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            *(*(arr2+i)+j) = ++count; //arr2[i][j]
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            cout << arr2[i][j] << " ";
        }
    }


    cout << "\n\n3. Using pointer to a pointer" << "\n";
    count = 0;
    darr = (int **)malloc(sizeof(int *) * r);
    for (i=0; i<r; i++) {
        darr[i] = (int *)malloc(c * sizeof(int));
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            *(*(darr+i)+j) = ++count; //arr2[i][j]
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            cout << darr[i][j] << " ";
        }
    }


    cout << "\n\n4. Using double pointer and one malloc call." << "\n";
    count = 0;
    len = sizeof(int *)*r + sizeof(int)*c*r;
    darr = (int **)malloc(len);
    ptr = (int *)(darr + r);
    for (i=0; i<r; i++) {
        *(darr + i) = (ptr + c*i);
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            darr[i][j] = ++count; //*(*(darr+i)+j)
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            cout << darr[i][j] << " ";
        }
    }

    return 0;
}


//Output:
/*
Dynamic 2D array allocation:

1. Using single pointer
1 2 3 4 5 6 7 8 9 10 11 12

2. Using an array of pointers
1 2 3 4 5 6 7 8 9 10 11 12

3. Using pointer to a pointer
1 2 3 4 5 6 7 8 9 10 11 12

4. Using double pointer and one malloc call.
1 2 3 4 5 6 7 8 9 10 11 12
*/