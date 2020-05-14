#include <iostream>

using namespace std;

class Test {
    private:
        int x;
        int y;
        int z;
    public:
        void setX(int x) {
            this->x = x;
        }
        void print() {
            cout << "x = " << x << endl; 
        }
        Test(int y=0, int z=0) {
            this->y = y;
            this->z = z;
        }
        Test &setY(int a) {
            y = a;
            return *this;
        }
        Test &setZ(int a) {
            z = a;
            return *this;
        }
        void print2() {
            cout << "y = " << y << ", z = " << z << endl; 
        }
};

int main() {
    Test obj;
    int x = 20;
    obj.setX(20);
    obj.print();

    Test obj1(5, 5);
    obj1.setY(10).setZ(20);

    obj1.print2();
    return 0;
}