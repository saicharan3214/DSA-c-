#include <iostream>

class Employee {
public:
    virtual double calculatePay() const = 0; // Pure virtual function
};

class Manager : public Employee {
private:
    double salary;

public:
    Manager(double s) : salary(s) {}

    double calculatePay() const override {
        // For simplicity, considering monthly salary
        return salary;
    }
};

class Engineer : public Employee {
private:
    double hourlyRate;
    double hoursWorked;

public:
    Engineer(double rate, double hours) : hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const override {
        // For simplicity, considering hourly rate and hours worked
        return hourlyRate * hoursWorked;
    }
};

int main() {
    // Example usage
    Employee* manager = new Manager(5000.0);
    Employee* engineer = new Engineer(25.0, 40.0);

    std::cout << "Manager's Monthly Pay: $" << manager->calculatePay() << std::endl;
    std::cout << "Engineer's Weekly Pay: $" << engineer->calculatePay() << std::endl;

    delete manager;
    delete engineer;

    return 0;
}
