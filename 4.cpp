// Q4. Multilevel Inheritance in C++: Person → Employee → Manager
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
};

// Derived class 1 (inherits from Person)
class Employee : public Person {
protected:
    int empID;
    double salary;

public:
    void setEmployeeDetails(int id, double s) {
        empID = id;
        salary = s;
    }
};

// Derived class 2 (inherits from Employee)
class Manager : public Employee {
private:
    string department;

public:
    void setDepartment(string d) {
        department = d;
    }

    void display() {
        cout << "Manager Details:\n";
        cout << "Name: " << name << "\nAge: " << age << "\nEmployee ID: " << empID
             << "\nSalary: " << salary << "\nDepartment: " << department << endl;
    }
};

// Main function
int main() {
    Manager m;
    m.setPersonDetails("Ishitha", 19);
    m.setEmployeeDetails(101, 75000);
    m.setDepartment("Human Resources");
    m.display();
    return 0;
}
