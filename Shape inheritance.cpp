#include<iostream>
#include <cmath>

class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}
    virtual double area() = 0; // pure virtual function
    virtual double perimeter() = 0; // pure virtual function
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() override {
        return height * width;
    }
    double perimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double area() override {
        return 0.5 * height * width;
    }
    double perimeter() override {
        double side = sqrt((height * height) + (width * width));
        return height + width + side;
    }
};

int main() {
    Rectangle rect(2,3);
    Triangle tri(3, 4);

    std::cout << "Rectangle:" << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;

    std::cout << "\nTriangle:" << std::endl;
    std::cout << "Area: " << tri.area() << std::endl;
    std::cout << "Perimeter: " << tri.perimeter() << std::endl;

    return 0;
}