// Q4. Program to show multilevel inheritance
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

class Employee : public Person {
protected:
    int empID;
public:
    void setEmployee(int id) {
        empID = id;
    }
};

class Manager : public Employee {
private:
    string dept;
public:
    void setDept(string d) {
        dept = d;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Department: " << dept << endl;
    }
};

int main() {
    Manager m;
    m.setPerson("Ishitha", 19);
    m.setEmployee(101);
    m.setDept("Finance");
    m.display();
    return 0;
}
