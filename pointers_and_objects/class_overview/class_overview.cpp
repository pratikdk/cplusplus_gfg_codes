#include <iostream>

using namespace std;


class Person {
    private:
        string name;
        int id;
    public:
        Person(string name, int id) {
            this->name = name;
            this->id = id;
        }
        void printName(){ 
            printf("Name: %s", name);
        }
        ~Person(){ // Auto called by compiler for Stack object deletion
            printf("\nobject deleted !!");
        }
        void destroy() { // Dynamically instantiated(on heap) object deletion
            printf("\nHeap object deleted !!");
            delete this;
        }
};

int main() {
    Person p1("Pratik", 7);

    Person *p2 = new Person("abc", 8);
    p2->destroy();
    return 0;
}