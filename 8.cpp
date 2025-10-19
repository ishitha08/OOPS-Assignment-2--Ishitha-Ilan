// Q8. Program showing overloading and overriding
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }
    void show(string msg) {
        cout << "Overloaded show: " << msg << endl;
    }
};

int main() {
    Derived d;
    d.show();          // overriding
    d.show("Hello");   // overloading
    return 0;
}
