// Q10. Abstract Class Example (Shape → Circle, Square)
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0; // pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) { radius = r; }
    double area() { return 3.1416 * radius * radius; }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) { side = s; }
    double area() { return side * side; }
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
