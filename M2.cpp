#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age:"<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"The person is eligible to vote"<<endl;
	}
	else
	{
		cout<<"The person is not eligible to vote"<<endl;
		cout<<18-age<<" Years left to be eligible to vote"<<endl;
	}
	return 0;
}