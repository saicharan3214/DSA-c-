#include <iostream>
using namespace std;
class MyClass 
{
private:
    int data1;
    double data2;
public:
    MyClass(int d1, double d2) : data1(d1), data2(d2) {}
    friend ostream& operator<<(ostream& os, const MyClass& obj) 
	{
        os << "Data1: " << obj.data1 << ", Data2: " << obj.data2;
        return os;
    }
};
int main() 
{
    MyClass myObject(625, 25);
    cout << "MyObject: " << myObject << endl;
    return 0;
}
