#include <iostream>

class Base {
public:
    Base(int x) { std::cout << "Base Constructor: " << x << "\n"; }
};

class Derived1 : public virtual Base {
public:
    Derived1(int x) : Base(x) { std::cout << "Derived1 Constructor\n"; }
};

class Derived2 : public virtual Base {
public:
    Derived2(int x) : Base(x) { std::cout << "Derived2 Constructor\n"; }
};

class Final : public Derived1, public Derived2 {
public:
    Final(int x) : Derived1(x), Derived2(x), Base(x) {  // try to remove Base(x)
        std::cout << "Final Constructor\n"; 
    }
};

int main() {
    Final obj(10);
    return 1;
}