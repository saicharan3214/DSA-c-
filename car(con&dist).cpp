#include<iostream>
#include<string>
using namespace std;
class car{
private:
string make;
string model;
int year;
public:
car(string carmake,string carmodel,int caryear){
	make=carmake;
	model=carmodel;
	year=caryear;
	cout<<"car was created:"<<make<<","<<model<<","<<year<<","<<endl;
	
}	
~car(){
	cout<<"car was destroyed:"<<make<<","<<model<<","<<year<<","<<endl;
}
void displayInfo() const{
	cout<<"car info:"<<make<<","<<model<<","<<year<<","<<endl;
	
}
};
int main(){ 
	car car1("benz","model b",2020);
	car1.displayInfo();
	car car2("KIA","model f",1999);
	car2.displayInfo();
	return 0;
}