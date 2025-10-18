// Q3. Single Inheritance in C++: Shape → Rectangle
#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double length;
    double width;

public:
    // Function to set dimensions of shape
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    // Function to calculate area
    double area() {
        return length * width;
    }

    // Function to calculate perimeter
    double perimeter() {
        return 2 * (length + width);
    }

    // Function to display results
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

// Main function
int main() {
    Rectangle r;
    r.setDimensions(5.0, 3.0);
    r.display();
    return 0;
}
