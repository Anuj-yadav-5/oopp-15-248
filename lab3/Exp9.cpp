#include <bits/stdc++.h>
using namespace std;

class Time {
private:
    int hh;
    int mm;
    int ss;

public:
    // Constructor using initializer list
    Time() : hh(0), mm(0), ss(0) {}

    void input(int h = 0, int m = 0, int s = 0);
    void show();
};

// input function defined outside class using Scope resolution
void Time::input(int h, int m, int s) {
    hh = h;
    mm = m;
    ss = s;
}

// show function defined outside class
void Time::show() {
    cout << hh << ":" << mm << ":" << ss << endl;
}

int main() {

    Time t1, t2;

    t1.input(10, 30, 45);
    t2.input();

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}