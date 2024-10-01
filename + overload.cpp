#include <iostream>
using namespace std;
class Adder {
private:
    int value;
public:
    Adder() : value(0) {}
    Adder(int initialValue) : value(initialValue) {}
    Adder operator+(const Adder& other) const 
	{
        Adder result;
        result.value = this->value + other.value;
        return result;
    }
    int getValue() const 
	{
        return value;
    }
};
int main() {
    Adder firstAdder(615);
    Adder secondAdder(25);
    Adder sumAdder = firstAdder + secondAdder;
    cout << "Sum: " << sumAdder.getValue() << std::endl;
    return 0;
}
