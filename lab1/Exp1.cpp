#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string branch;

public:
    // Constructor using initializer
    Student() : name(""), roll(0), branch("") {}

    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {

    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    s1.input();

    cout << "\nEnter details of Student 2:" << endl;
    s2.input();

    cout << "\nStudent 1 Details" << endl;
    s1.show();

    cout << "\nStudent 2 Details" << endl;
    s2.show();

    return 0;
}