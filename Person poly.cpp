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
    Student student("Alice");
    Teacher teacher("Mr. Smith");

    std::cout << "Student greeting: ";
    student.greet();

    std::cout << "Teacher greeting: ";
    teacher.greet();

    return 0;
}
