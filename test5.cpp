#include <iostream>

class Base {
public:
    Base(int x) { std::cout << "Base Constructor: " << x << "\n"; }
    Base() { std::cout << "Base default constructor: " << -1 << "\n"; }
};

class Derived1 : public virtual Base {
public:
    Derived1(int x) : Base(x) { std::cout << "Derived1 Constructor\n"; }
};

class Derived2 : public Derived1 {
public:
    Derived2(int x) : Derived1(x) {  // we call Base() implicitly
        std::cout << "Derived2 Constructor\n"; 
    }
};


int main() {
    Derived2 obj(10);
    return 1;
}