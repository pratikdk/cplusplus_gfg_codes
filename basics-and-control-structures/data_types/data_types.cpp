#include <iostream>


int main(){
    std::cout << "Size of char : " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of int : " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of signed short int : " << sizeof(signed short int) << " bytes" << std::endl;
    std::cout << "Size of unsigned short int : " << sizeof(unsigned short int) << " bytes" << std::endl;
    std::cout << "Size of signed int : " << sizeof(signed int) << " bytes" << std::endl;
    std::cout << "Size of unsigned int : " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << std::endl;
    std::cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << std::endl;
    std::cout << "Size of signed long long int : " << sizeof(signed long long int) << " bytes" << std::endl;
    std::cout << "Size of unsigned long long int : " << sizeof(unsigned long long int) << " bytes" << std::endl;
    std::cout << "Size of float : " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double : " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of long double : " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Size of wide character : " << sizeof(wchar_t) << " bytes"<< std::endl;
    return 0;
}