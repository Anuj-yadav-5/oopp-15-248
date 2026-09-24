#include <iostream>
using namespace std;

class Demo {
public:

    // Call by Value
    void byValue(int x) {
        x = x + 10;
        cout << "Inside Call by Value: " << x << endl;
    }

    // Call by Reference
    void byReference(int &x) {
        x = x + 10;
        cout << "\nInside Call by Reference: " << x << endl;
    }

    // Call by Address
    void byAddress(int *x) {
        *x = *x + 10;
        cout << "\nInside Call by Address: " << *x << endl;
    }
};

int main() {
    Demo obj;

    int a = 10;
    int b = 10;
    int c = 10;

    // Call by Value
    obj.byValue(a);
    cout << "After Call by Value: " << a << endl;

    // Call by Reference
    obj.byReference(b);
    cout << "After Call by Reference: " << b << endl;

    // Call by Address
    obj.byAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}