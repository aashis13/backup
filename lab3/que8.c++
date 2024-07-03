#include <iostream>
#include <string>

class Account
{
private:
    int account_no;
    std::string account_holder_name;
    double balance;
    double minimum_balance;

public:
    void create_account(int acc_no, const std::string &holder_name, double initial_balance, double min_balance)
    {
        account_no = acc_no;
        account_holder_name = holder_name;
        balance = initial_balance;
        minimum_balance = min_balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        std::cout << "Amount deposited successfully.\n";
    }

    void withdraw(double amount)
    {
        if (balance - amount >= minimum_balance)
        {
            balance -= amount;
            std::cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            std::cout << "Insufficient balance. Withdrawal failed.\n";
        }
    }

    void balance_inquiry()
    {
        std::cout << "Account No: " << account_no << "\n";
        std::cout << "Account Holder Name: " << account_holder_name << "\n";
        std::cout << "Balance: " << balance << "\n";
    }
};

int main()
{
    Account account;
    account.create_account(123456, "John Doe", 1000.0, 500.0);

    account.deposit(500.0);
    account.balance_inquiry();

    account.withdraw(200.0);
    account.balance_inquiry();

    return 0;
}