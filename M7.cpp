#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() const {
        return length * width;
    }
};
class Cuboid : public Rectangle {
private:
    double height;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}
    double calculateVolume() const {
        return calculateArea() * height;
    }
};
int main() {
    Rectangle rectangle(10,20);
    cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;
    Cuboid cuboid(10,20,30);
    cout << "Area of Cuboid: " << cuboid.calculateArea() << std::endl;
    cout << "Volume of Cuboid: " << cuboid.calculateVolume() << std::endl;
    return 0;
}
