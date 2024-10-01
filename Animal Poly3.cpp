#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void eat() const = 0; // Pure virtual function
};

class Herbivore : public Animal {
public:
    void eat() const override {
        cout << "Herbivore is eating plants." << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() const override {
        cout << "Carnivore is eating other animals." << endl;
    }
};

int main() {
    // Example usage
    Herbivore herbivore;
    Carnivore carnivore;

    cout << "Herbivore: ";
    herbivore.eat();

    cout << "Carnivore: ";
    carnivore.eat();

    return 0;
}
