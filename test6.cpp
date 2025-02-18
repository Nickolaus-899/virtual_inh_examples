#include <iostream>

class Base {
public:
    int init = 5;
    Base(int x) { std::cout << "Base Constructor: " << x << "\n"; }
};

class Derived1 : public virtual Base {
public:
    Derived1(int x) : Base(x) { std::cout << "Derived1 Constructor\n"; }
};

class Derived2 : public virtual Base { // try to remove virtual
public:
    Derived2(int x) : Base(x) { std::cout << "Derived2 Constructor\n"; }
};

class Derived3 : public virtual Derived1, public virtual Derived2 {
public:
    Derived3(int x) : Derived1(x), Derived2(x), Base(x) { std::cout << "Derived3 Constructor\n"; }
};

class Derived4 : public virtual Derived2, public virtual Derived1 {
public:
    Derived4(int x) : Derived1(x), Derived2(x), Base(x) {
        std::cout << "Derived4 Constructor\n"; 
    }
};

class Final : public Derived3, public Derived4 { // try to add public Derived2 (and then virtual)
public:
    Final(int x) : Derived1(x), Derived2(x), Derived3(x), Derived4(x), Base(x) {
        std::cout << "Final Constructor\n"; 
    }
};

int main() {
    Final obj(10);
    // try to cout obj.init
    return 1;
}