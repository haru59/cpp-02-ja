#include "bank_account.h"
#include <iostream>

BankAccount::BankAccount(double initial_balance) {
    balance = initial_balance;
}

void BankAccount::withdraw(double amount) {
    if (amount < 0 || amount > balance) {
        std::cout << "Insufficient balance!" << std::endl;;
    }else{
        balance = balance - amount;
    }
}

void BankAccount::deposit(double amount) {
    if (amount < 0) {
        std::cout << "Insufficient balance!" << std::endl;
    }else{
        balance = balance + amount;
    }
}

double BankAccount::get_balance() {
    return balance;
}