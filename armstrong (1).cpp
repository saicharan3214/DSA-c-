 #include <iostream>
#include <cmath>

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;

    while (number > 0) {
        number /= 10;
        digits++;
    }

    number = originalNumber;

    while (number > 0) {
        int digit = number % 10;
        sum +=pow(digit, digits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int number;
using namespace std;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number.\n";
    } else {
        cout << number << " is not an Armstrong number.\n";
    }

    return 0;
}
 