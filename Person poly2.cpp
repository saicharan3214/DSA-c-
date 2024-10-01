#include <iostream>
#include <string>

class Person {
public:
    virtual void greet() const = 0;  // Pure virtual function
};

class Student : public Person {
private:
    std::string name;

public:
    Student(const std::string& n) : name(n) {}

    void greet() const override {
        std::cout << "Student " << name << " says: Hello, everyone!" << std::endl;
    }
};

class Teacher : public Person {
private:
    std::string name;

public:
    Teacher(const std::string& n) : name(n) {}

    void greet() const override {
        std::cout << "Teacher " << name << " says: Good day, class!" << std::endl;
    }
};

int main() {
    // Example usage
    Person* person1 = new Student("Alice");
    Person* person2 = new Teacher("Mr. Smith");

    std::cout << "Person 1 greeting: ";
    person1->greet();

    std::cout << "Person 2 greeting: ";
    person2->greet();

    delete person1;
    delete person2;

    return 0;
}
