class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance);

    void deposit(double amount);

    void withdraw(double amount);

    double get_balance();
};