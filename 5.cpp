// Q5. Program to show multiple inheritance
#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "I am a person." << endl;
    }
};

class Athlete {
public:
    void info() {
        cout << "I am an athlete." << endl;
    }
};

class SportsPerson : public Person, public Athlete {
public:
    void show() {
        // Ambiguity resolved using scope resolution
        Person::info();
        Athlete::info();
    }
};

int main() {
    SportsPerson sp;
    sp.show();
    return 0;
}
