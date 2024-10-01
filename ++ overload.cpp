#include <iostream>
using namespace std;
class Incrementer 
{
private:
    int value;
public:
    Incrementer() : value(5) {}
    Incrementer& operator++() 
	{
        ++value;
        return *this;  
    }
    int getValue() const 
	{
        return value;
    }
};
int main() 
{
    Incrementer myIncrementer;
    cout << "Initial value: " << myIncrementer.getValue() << endl;
    ++myIncrementer;
    cout << "After increment: " << myIncrementer.getValue() << endl;
    return 0;
}
