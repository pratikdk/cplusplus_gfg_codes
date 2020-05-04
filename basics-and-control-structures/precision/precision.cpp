#include <bits/stdc++.h>

using namespace std;

int main () {
    double x = 1.411, y = 1.500, z = 1.611;
    printf("Floor x = %.0f, y = %.0f, z = %.0f", floor(x), floor(y), floor(z));
    printf("\nCeil x = %.0f, y = %.0f, z = %.0f", ceil(x), ceil(y), ceil(z));
    printf("\nTrunc x = %.0f, y = %.0f, z = %.0f", trunc(x), trunc(y), trunc(z));
    printf("\nRound x = %.0f, y = %.0f, z = %.0f", round(x), round(y), round(z));

    double pi = 3.14159;
    printf("\nsetprecision(): \n");
    std::cout << fixed << setprecision(0) << pi << std::endl;
    std::cout << fixed << setprecision(3) << pi << std::endl;
}