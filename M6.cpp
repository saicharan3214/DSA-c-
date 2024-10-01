#include <iostream>
#include<cmath>
using namespace std;
double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}
double getInterestRate(bool isSeniorCitizen) {
    return isSeniorCitizen ? 12.0 : 10.0;
}
int main() {
    double principal, time;
    bool isSeniorCitizen;
    principal=10000;
    time=2;
    cout << "Is the customer a senior citizen? (1 for Yes, 0 for No): ";
    cin >> isSeniorCitizen;
    if (isSeniorCitizen != 0 && isSeniorCitizen != 1) {
        std::cout << "Invalid input for senior citizen status. Please enter 1 for Yes or 0 for No." << std::endl;
        return 1;  
    }
    double interestRate = getInterestRate(isSeniorCitizen);
    double simpleInterest = calculateSimpleInterest(principal, interestRate, time);
    cout << "Simple Interest: " << simpleInterest << std::endl;
    return 0;
}
