#include <iostream> 
  
using namespace std; 
  
class Complex 
{ 
private: 
    double real; 
    double imag; 
  
public: 
    // Default constructor 
    explicit Complex(double r = 0.0, double i = 0.2) { //: real(r), imag(i) {
        this->real = r;
        this->imag = i;
    } 
  
    // A method to compare two Complex numbers 
    bool operator == (Complex rhs) {
       cout << rhs.real << " " << rhs.imag << "\n";
       return (real == rhs.real && imag == rhs.imag)? true : false; 
    } 
}; 
  
int main() 
{ 
    // a Complex object 
    Complex com1(3.0, 0.0); 
  
    if (com1 == (Complex)3.1) 
       cout << "Same"; 
    else
       cout << "Not Same"; 
     return 0; 
}