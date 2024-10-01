#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int emp_id;
    double salary;
public:
    Employee(string n, int id, double sal)
        : name(n), emp_id(id), salary(sal) {}
    string get_name() const {
        return name;
    }
    void set_name(const string& new_name) {
        name = new_name;
    }
    int get_emp_id() const {
        return emp_id;
    }
    void set_emp_id(int new_id) {
        emp_id = new_id;
    }
    double get_salary() const {
        return salary;
    }
    void set_salary(double new_salary) {
        salary = new_salary;
    }
};
class Manager : public Employee {
private:
    string department;
    double bonus;
public:
    Manager(string n, int id, double sal, string dept, double b)
        : Employee(n, id, sal), department(dept), bonus(b) {}
    string get_department() const {
        return department;
    }
    void set_department(const string& new_department) {
        department = new_department;
    }
    double get_bonus() const {
        return bonus;
    }
    void set_bonus(double new_bonus) {
        bonus = new_bonus;
    }
};
class Engineer : public Employee {
private:
    string specialty;
    int hours;
public:
    Engineer(string n, int id, double sal, string spec, int hrs)
        : Employee(n, id, sal), specialty(spec), hours(hrs) {}
    string get_specialty() const {
        return specialty;
    }
    void set_specialty(const string& new_specialty) {
        specialty = new_specialty;
    }
    int get_hours() const {
        return hours;
    }
    void set_hours(int new_hours) {
        hours = new_hours;
    }
};

int main() {
    return 0;
}
