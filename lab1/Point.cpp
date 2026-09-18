#include <bits/stdc++.h>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    Point p1(10, 20);
    Point p2(30, 40);

    p1.show();
    p2.show();

    return 0;

}