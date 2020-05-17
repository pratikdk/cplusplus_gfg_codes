#include <iostream>

using namespace std;

// Structure declaration
struct Address {
    char name[50];
    char street[100];
    char city[50];
};

// Declare Structure variables
struct Point {
    int x, y;
    int z = 1;
};

struct Square {
    int l;
    int b;
    static int squares_count;
    Square(int l, int b) {
        this->l = l;
        this->b = b;
        squares_count += 1;
    }
};

int Square::squares_count = 0;

int main() {
    struct Point p1 = {0, 1};
    Point p2 = {2, 4};
    p2.z = p2.y;
    printf("x = %d, y = %d\n", p2.x, p2.y);

    // Array of struct
    struct Point pts[10];
    pts[0].x = 10;
    pts[0].y = 20;
    printf("%d %d", pts[0].x, pts[0].y);

    //Struct pointer
    struct Point *ptr;
    ptr = &p2;
    printf("Pointing to p2 = %p\n", ptr);
    ptr = pts;
    printf("Pointing to pts base = %p\n", ptr);

    Square s1 = {4, 4}; // Works even without constructor
    //Square::squares_count += 1;
    printf("s3: length = %d, breadth = %d\n", s1.l, s1.b);
    Square s2 = {5, 5};
    //Square::squares_count += 1;
    printf("s3: length = %d, breadth = %d\n", s2.l, s2.b);
    printf("Square count: %d", Square::squares_count);

    // Square creation using constructor
    Square s3(6, 6);
    printf("s3: length = %d, breadth = %d\n", s3.l, s3.b);
    printf("Square count: %d\n", Square::squares_count); 
    return 0;
}