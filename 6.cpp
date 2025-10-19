// Q6. Program using friend function to share data
#include <iostream>
using namespace std;

class Sports; // forward declaration

class Student {
private:
    int marks;
public:
    Student(int m) { marks = m; }
    friend void showTotal(Student, Sports);
};

class Sports {
private:
    int score;
public:
    Sports(int s) { score = s; }
    friend void showTotal(Student, Sports);
};

void showTotal(Student s, Sports sp) {
    cout << "Total = " << s.marks + sp.score << endl;
}

int main() {
    Student stu(80);
    Sports sp(20);
    showTotal(stu, sp);
    return 0;
}
