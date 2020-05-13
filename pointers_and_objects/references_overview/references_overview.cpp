#include <bits/stdc++.h>

using namespace std;

void swap(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;
}

struct Student {
    string name;
    string address;
    string rollNo;
};

void printStructObject(Student &s) {
    cout << s.name << " " << s.address << " " << s.rollNo << "\n";
}

int main () {
    int x = 10;
    int &ref = x;
    cout << "&x: " << &x << "\n";
    cout << "&ref: " << &ref << "\n";
    ref = 20;
    cout << "x(updated ref): " << x << "\n";
    x = 30;
    cout << "ref(updated x): " << ref << "\n";


    int a = 2, b = 3;
    swap(a, b);
    cout << "Swap : " <<  a << " " << b << "\n";


    Student s1;
    s1.name = "Pratik";
    s1.address = "India";
    s1.rollNo = "1";
    printStructObject(s1);


    vector<int> vectInt{10, 20, 30, 40};
    for (int &i: vectInt) {
        i = i + 5;
    }
    for (int i: vectInt) {
        cout << i << " ";
    }
    cout << "\n";


    vector<string> vectString{"geeksforgeeks practice",  
                     "geeksforgeeks write", 
                     "geeksforgeeks ide"};
    for (string &j: vectString) {
        cout << j << " ";
    }
    cout << "\n";
    return 0;
}