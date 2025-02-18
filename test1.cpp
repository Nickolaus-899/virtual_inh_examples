#include <iostream>

class Base {
public:
    int init = 0;
    Base(int x) { std::cout << "Base Constructor: " << x << "\n"; init = x; }
    Base(): init(0) {}
};

class Derived1 : public virtual Base {
public:
    Derived1(int x) : Base(x) { 
        std::cout << "Derived1 Constructor\n";
        this->init *= 3;
    }
};

class Derived2 : public virtual Base {
public:
    Derived2(int x) : Base(x) { 
        std::cout << "Derived2 Constructor\n"; 
        this->init *= 4;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final(int x) : Derived1(x), Derived2(x), Base(x) {  // try to remove Base(x)
        std::cout << "Final Constructor\n"; 
    }
};
 

int main() {
    Final obj(10);
    std::cout << obj.init << std::endl;
    return 1;
}