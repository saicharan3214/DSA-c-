#include <iostream>
#include <algorithm>
using namespace std;
void reverseString(string &str) 
{
    reverse(str.begin(), str.end());
}
int main() 
{
    string myString = "Hello, World!";
    cout << "Original String: " << myString << endl;
    reverseString(myString);
    cout << "Reversed String: " << myString << endl;
    return 0;
}
