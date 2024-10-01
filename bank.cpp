#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance; 
        cout << "Account created for " << accountHolderName << " with account number: " << accountNumber << endl;
    }

    // Destructor to clean up
    ~BankAccount() {
        cout << "Account for " << accountHolderName << " with account number " << accountNumber << " is closed." << endl;
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating an account using the constructor
    BankAccount account1("John Doe", 123456, 1000.50);
    
    // Display account details
    account1.displayAccountDetails();

    // The destructor will be called automatically when the object goes out of scope
    return 0;
}
