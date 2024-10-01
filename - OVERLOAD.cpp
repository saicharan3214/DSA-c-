#include <iostream>
using namespace std;
class Subtracter 
{
private:
    int value;
public:
    Subtracter(int val) : value(val) {}
    Subtracter operator-(const Subtracter& other) const 
	{
        int result = value - other.value;
        return Subtracter(result);
    }
    int getValue() const 
	{
        return value;
    }
};
int main() 
{
    Subtracter a(10);
    Subtracter b(5);
    Subtracter c = a - b ; 
    cout << "Result of subtraction: " << c.getValue() << std::endl;
    return 0;
}