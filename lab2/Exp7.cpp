#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    double salary;
    double &newSalary;

public:
    // Constructor using initializer 
    Employee(double s) : salary(s), newSalary(salary) {}

    // Exp 5: update using reference
    void updateByReference() {
        newSalary = newSalary + (newSalary * 0.10);
    }

    // Exp 6: update using pointer
    void updateByPointer() {
        double *ptr = &salary;
        *ptr = *ptr + (*ptr * 0.10);
    }

    double getSalary() {
        return salary;
    }
};

int main() {

    // Experiment 5
    Employee emp1(50000);

    emp1.updateByReference();

    cout << "Salary after reference update: "<< emp1.getSalary() << endl;

    // Experiment 6
    Employee emp2(50000);

    emp2.updateByPointer();

    cout << "Salary after pointer update: "<< emp2.getSalary() << endl;
    return 0;
}