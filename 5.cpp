// Q5. Multiple Inheritance in C++: Person + Athlete → SportsPerson
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    void info() { cout << "I am a person." << endl; }
};

class Athlete {
public:
    void info() { cout << "I am an athlete." << endl; }
};

class SportsPerson : public Person, public Athlete {
public:
    void showInfo() {
        // Resolve ambiguity using scope resolution
        Person::info();
        Athlete::info();
    }
};

int main() {
    SportsPerson sp;
    sp.showInfo();
    return 0;
}
