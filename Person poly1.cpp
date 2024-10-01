#include <iostream>
using namespace std;
class Person 
{
public:
    virtual void work() 
	{
        cout << "Person is working." << endl;
    }
    virtual ~Person() 
	{
        cout << "Person destructor called." << endl;
    }
};

class Employee : public Person 
{
public:
    void work() override 
	{
    	
        cout << "Employee is working on assigned tasks." << endl;
    }
    ~Employee() override 
	{
        cout << "Employee destructor called." << endl;
    }
};

class Manager : public Person 
{
public:
    void work() override 
	{
        cout << "Manager is coordinating and managing tasks." << endl;
    }

    ~Manager() override 
	{
        cout << "Manager destructor called." << endl;
    }
};

int main() 
{
    Person* person1 = new Employee();
    Person* person2 = new Manager();
    person1->work();
    person2->work();
    delete person1;
    delete person2;

    return 0;
}
