#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    string branch;
    int age;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cin.ignore();
        cout << "Enter Branch :";
        getline(cin , branch);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    char calculateGrade()
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    void display()
    {
        cout << "\n--- Student Record ---\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Branch      :  " << branch <<endl;
        cout << "Age         : " << age << endl;
        cout << "Marks       : " << marks << endl;
        cout << "Grade       : " << calculateGrade() << endl;
    }
};

int main()
{
    Student s1;
    Student s2;

    s1.input();
    s2.input();
    s1.display();
    s2.display();

    return 0;
}