#include <iostream>

class A {
public:
    A() { std::cout << "A constructor" << std::endl; }
    virtual void method() { std::cout << "A method" << std::endl; }
};

class B : virtual private A {
public:
    B() { std::cout << "B constructor" << std::endl; }
};

class C : virtual public A {  // try to switch to private
public:
    C() { std::cout << "C constructor" << std::endl; }
};

class D : public B, public C, virtual private A { // try to switch to public
public:
    D() { std::cout << "D constructor" << std::endl; }
};

int main() {
    D d;
    d.method();

    return 1;
}
