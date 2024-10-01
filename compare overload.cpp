#include <iostream>
using namespace std;
class MyObject 
{
private:
    int data;
public:
    MyObject(int value) : data(value) {}
    bool operator==(const MyObject& other) const {
        return this->data == other.data;
    }
};
int main() {
    MyObject obj1(10);
    MyObject obj2(20);
    MyObject obj3(30);
    if (obj1 == obj2) 
	{
        cout << "obj1 and obj2 are equal." << std::endl;
    } else {
        cout << "obj1 and obj2 are not equal." << std::endl;
    }
    if (obj1 == obj3) 
	{
        cout << "obj1 and obj3 are equal." << std::endl;
    } 
	else 
	{
        cout << "obj1 and obj3 are not equal." << std::endl;
    }
    return 0;
}
