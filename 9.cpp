// Q9. BankAccount Example (Encapsulation)
#include <iostream>
#include <string>
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

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void display() {
        cout << "Account Holder: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Ishitha", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();
    return 0;
}
