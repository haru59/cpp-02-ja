#include "bank_Account.h"
#include <iostream>

int main() {
    BankAccount bank_account(100);
    std::cout << bank_account.get_balance() << std::endl;
    bank_account.deposit(50.0);
    std::cout << bank_account.get_balance() << std::endl;
    bank_account.withdraw(30.0);
    std::cout << bank_account.get_balance() << std::endl;
    bank_account.withdraw(30.0);
    std::cout << bank_account.get_balance() << std::endl;
    bank_account.withdraw(150.0);
    std::cout << bank_account.get_balance() << std::endl;

    return 0;
}