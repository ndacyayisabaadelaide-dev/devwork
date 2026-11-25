#include <iostream>
#include <"BankAccount.h">
using namespace std;

BankAccount::BankAccount(string name, double amount) {
    owner = name;
    balance = amount;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful." << endl;
    }
}


void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful." << endl;
    }
    else {
        cout << "Withdrawal failed." << endl;
    }
}


void BankAccount::print() {
    cout << "Owner: " << owner << endl;
    cout << "Balance: " << balance << endl;
}

return 0;
}