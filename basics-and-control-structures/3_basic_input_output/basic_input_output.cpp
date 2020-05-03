#include <iostream>

int main() {
    int age;
    char welcome_msg[] = "Welcome to xyz site!";

    std::cout << welcome_msg<< ", What is your age ?" << std::endl;
    std::cin >> age;
    std::cout << "\nYour age is: " << age << std::endl;

    std::cerr << "An un-buffered error occured!";
    std::clog << "\nA buffered error occured!";

    return 0;
}