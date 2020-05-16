#include <iostream>

using namespace std;

int main() {
    // 2 dimensional array
    int twod_arr[3][4] = { 
        { 10, 11, 12, 13 }, 
        { 20, 21, 22, 23 }, 
        { 30, 31, 32, 33 } 
    };
    // 3 dimensional array
    int threed_arr[2][3][2] = { 
        { 
            {5, 10}, 
            {6, 11}, 
            {7, 12}, 
        }, 
        { 
            {20, 30}, 
            {21, 31}, 
            {22, 32}, 
        } 
    };
    // Loop vars
    int i, j, k;

    // Loop over 2d array
    for (i=0; i<3; i++) {
        printf("Address of %dth array = %p %p\n", i, twod_arr[i], *(twod_arr+i) );
        for (j=0; j<4; j++) {
            printf("%d %d ", twod_arr[i][j], *(*(twod_arr+i)+j) );
        }
        printf("\n");
    }
    
    // Loop over 3d array
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            for (k=0; k<2; k++) {
                printf("%d\t", *(*(*(threed_arr+i)+j)+k) );
            }
            printf("\n");
        }
    }

    return 0;
}