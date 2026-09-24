#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    double salary;
    double *newSalary;

public:
    Employee(double s) : salary(s), newSalary(&salary) {}

    void updateSalary() {
        *newSalary = *newSalary + (*newSalary * 0.10);
    }

    void display() {
        cout << "Salary: " << salary << endl;
        cout << "Salary using pointer: " << *newSalary << endl;
    }
};

int main() {
    Employee emp(50000);

    emp.updateSalary();

    emp.display();

    return 0;
}