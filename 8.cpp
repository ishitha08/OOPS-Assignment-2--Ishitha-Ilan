// Q8. Function Overloading and Overriding
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base class function\n"; }
};

class Derived : public Base {
public:
    // Overriding
    void show() override { cout << "Derived class function\n"; }
    // Overloading
    void show(string msg) { cout << "Overloaded: " << msg << endl; }
};

int main() {
    Derived d;
    d.show();            // Calls overridden function
    d.show("Hello");     // Calls overloaded version
    return 0;
}
