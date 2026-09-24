#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() : x(0), y(0) {}

    void input();
    void show();
};

// Inline input function
inline void Point::input() {
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;
}

// Inline show function
inline void Point::show() {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

int main() {

    Point p1, p2;

    cout << "Enter Point 1:" << endl;
    p1.input();

    cout << "\nEnter Point 2:" << endl;
    p2.input();

    cout << "\nPoint 1:" << endl;
    p1.show();

    cout << "\nPoint 2:" << endl;
    p2.show();

    return 0;
}