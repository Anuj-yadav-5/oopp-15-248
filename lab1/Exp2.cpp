#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string branch;

public:
    // Constructor using initializer list
    Student(string n, int r, string b)
        : name(n), roll(r), branch(b) {}

    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {

    string name, branch;
    int roll;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter roll: ";
    cin >> roll;

    cout << "Enter branch: ";
    cin >> branch;

    Student s(name, roll, branch);

    cout << "\nStudent Details " << endl;
    s.show();

    return 0;
}