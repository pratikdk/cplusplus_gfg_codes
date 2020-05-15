#include <iostream>
#include <memory>
using namespace std;

// Integer smart pointer
class SmartPtr {
    private:
        int* ptr;
    public:
        // Constructor
        explicit SmartPtr(int* p = NULL) {
            ptr = p;
        }
        // Destructor
        ~SmartPtr() {
            delete ptr;
        }
        // Operator Overloading
        int& operator*() {
            return *ptr; // Actual Dereferencing
        }

};

// Generic smart pointer
template <class T>
class GenricSmartPtr {
    private:
        T* ptr;
    public:
        explicit GenricSmartPtr(T* p = NULL) {
            ptr = p;
        }

        ~GenricSmartPtr() {
            delete ptr;
        }
        // Overloading derefercing operator of pointer
        T& operator*() {
            return *ptr;
        }
        // Overloading arrow operator of pointer
        T* operator->() {
            return ptr;
        }
};

// Other Type of smart pointers
// ** Unique Pointer **
class Rectangle {
    private:
        int length;
        int breadth;
    public:
        // Constructor
        Rectangle (int l, int b) {
            this->length = l;
            this->breadth = b;
        }

        // Compute area
        int area() {
            return length * breadth;
        }
};

int main() {
    // Integer type Smart Pointer
    SmartPtr sptr(new int());
    *sptr = 20; // update value
    cout << *sptr << "\n"; // Dereference to print

    // Generic type Smart Pointer (using template)
    GenricSmartPtr<int> gsptr(new int());
    *gsptr = 20; // update value
    cout << *gsptr << "\n"; // Dereference to print


    //// Other type of smart pointers

    // Unique pointer
    unique_ptr<Rectangle> uniq_P1(new Rectangle(10, 5));
    cout << uniq_P1->area() << "\n";
    // unique_ptr<Rectangle> uniq_P2(uniq_P1)
    unique_ptr<Rectangle> uniq_P2;
    uniq_P2 = move(uniq_P1); // Remove Link between uniq_P1 and its pointed address
    cout << uniq_P2->area() << "\n";
    // cout << uniq_P1->area() << "\n";

    // Shared pointer
    shared_ptr<Rectangle> shared_P1(new Rectangle(10, 5));
    shared_ptr<Rectangle> shared_P2;
    shared_P2 = shared_P1;

    cout << shared_P1->area() << "\n";
    cout << shared_P2->area() << "\n";
    // Reference count
    cout << shared_P1.use_count() << "\n";
    cout << shared_P2.use_count() << "\n";

    return 0;
}