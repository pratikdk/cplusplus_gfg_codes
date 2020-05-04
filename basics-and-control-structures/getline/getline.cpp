#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str;
    int t = 4;

    // while (t--) {
    //     getline(std::cin, str);
    //     std::cout << str << " : newline" << std::endl;
    // }
    // std::cout << str << " : final" << std::endl;


    while (t--) {
        getline(cin, str);

        while(str.length() == 0) {
            getline(cin, str);
        }
        std::cout << str << " : newline" << std::endl;
    }
    
    return 0;
}