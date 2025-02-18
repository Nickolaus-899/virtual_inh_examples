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

class Lynx : public Cat, public Predator {
public:
    void lynx_action() {
        std::cout << "Lynx is acting!" << std::endl;
    }
};

int main() {
    Cat cat;
    cat.meow();

    Predator predator;
    predator.attack();

    Lynx lynx;
    lynx.lynx_action();
    lynx.age = 5;
    std::cout << lynx.age << std::endl;

    return 1;
}
