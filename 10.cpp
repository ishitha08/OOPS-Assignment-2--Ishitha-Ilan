// Q10. Program showing abstract class and pure virtual function
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;  // pure virtual
};

class Circle : public Shape {
private:
    double r;
public:
    Circle(double rad) { r = rad; }
    double area() {
        return 3.1416 * r * r;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) { side = s; }
    double area() {
        return side * side;
    }
};

int main() {
    Shape *s1 = new Circle(5);
    Shape *s2 = new Square(4);

    cout << "Circle area: " << s1->area() << endl;
    cout << "Square area: " << s2->area() << endl;

    delete s1;
    delete s2;
    return 0;
}
