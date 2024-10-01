#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual ~Shape() {}
};
class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double calculateArea() const override {
        return side * side;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Square square(4);
    Circle circle(5);
    std::cout << "Area of Square: " << square.calculateArea() << std::endl;
    std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;

    return 0;
}
