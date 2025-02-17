#include <iostream>
#include <string>


class Animal {
public:
    int age;
    std::string color;
    void live() {
        std::cout << "Is living!" << std::endl;
    }
};

class Cat : virtual public Animal {
public:
    void meow() {
        std::cout << "Meow!" << std::endl;
    }
};

class Predator : virtual public Animal {
public:
    void attack() {
        std::cout << "Attack!" << std::endl;
    }
};

class Cat2 : virtual public Cat {
public:
    void meow2() {
        std::cout << "Meow!" << std::endl;
    }
};

class Predator2 : virtual public Predator {
public:
    void attack2() {
        std::cout << "Attack!" << std::endl;
    }
};


class Lynx : public Cat2, public Predator2 {
public:
    void lynx_action() {
        std::cout << "Lynx is acting!" << std::endl;
    }
};

int main() {
    Lynx lynx;
    lynx.meow2();
    lynx.age = 5;
    std::cout << lynx.age << std::endl;

    return 0;
}
    