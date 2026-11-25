#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    // Constructor
    BankAccount(string name, double amount) {
        owner = name;
        balance = amount;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful." << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount." << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
    }

    // Print account details
    void print() {
        cout << "\nOwner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1("Alice", 50000);
    BankAccount account2("John", 30000);

    account1.print();
    account1.deposit(10000);
    account1.withdraw(5000);
    account1.print();

    account2.print();
    account2.deposit(5000);
    account2.withdraw(40000);
    account2.print();

    return 0;
}