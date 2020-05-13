#include <iostream>

using namespace std;

namespace ns {
    int x = 10;
    int nvalue() {
        std::cout << "Returning " << x << std::endl;
        return x;
    }
}


namespace ns1 {
    class c1 {
        public:
        void display() {
            std::cout << "ns1::c1::display()\n";
        }
    };
}


namespace ns2 {
    class c1;
}
class ns2::c1 {
    public:
    void display() {
        std::cout << "ns2::c1::display()\n";
    }
};


namespace ns3 {
    void display();
    class c1 {
        public:
        void display();
    };
}
void ns3::c1::display() {
    std::cout << "ns3::c1::display()\n";
}
void ns3::display() {
    std::cout << "ns3::display()\n";
}


int main() {
    std::cout << "Namespace ns: " << ns::nvalue() << "\n";

    ns1::c1 obj1;
    obj1.display();

    ns2::c1 obj2;
    obj2.display();

    ns3::c1 obj3;
    obj3.display();
    ns3::display();
}