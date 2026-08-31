#include "BanckAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(const string& holder, double initialBalance)
    : accountHolder(holder), balance(initialBalance) {}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }
    else {
        cout << "Invalid deposit amount.\n";
    }
}

void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}