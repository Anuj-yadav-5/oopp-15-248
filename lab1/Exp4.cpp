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

    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {

    Time t1, t2;

    t1.input(10, 30, 45);
    t2.input(12, 15, 20);

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}