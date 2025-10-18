// Q6. Friend Function Example: Student + Sports
#include <iostream>
using namespace std;

class Sports; // Forward declaration

class Student {
private:
    int marks;
public:
    Student(int m) : marks(m) {}
    friend void showTotal(Student, Sports); // Friend declaration
};

class Sports {
private:
    int score;
public:
    Sports(int s) : score(s) {}
    friend void showTotal(Student, Sports);
};

// Friend function definition
void showTotal(Student s, Sports sp) {
    cout << "Total (Marks + Score): " << s.marks + sp.score << endl;
}

int main() {
    Student stu(85);
    Sports sp(15);
    showTotal(stu, sp);
    return 0;
}
