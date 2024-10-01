#include <iostream>

class Animal {
public:
    virtual void speak() const = 0; // Pure virtual function
};

class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Meow! I am a cat." << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof! I am a dog." << std::endl;
    }
};

int main() {
    // Example usage
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    std::cout << "Cat says: ";
    cat->speak();

    std::cout << "Dog says: ";
    dog->speak();

    delete cat;
    delete dog;

    return 0;
}
