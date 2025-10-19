// Q9. BankAccount program showing encapsulation
#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;
public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }
    void deposit(double amt) {
        balance += amt;
    }
    void withdraw(double amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance!" << endl;
    }
    void show() {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Ishitha", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.show();
    return 0;
}
