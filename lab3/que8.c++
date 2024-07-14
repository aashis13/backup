#include <iostream>
//#include <string>
using namespace std;
class Account
{
private:
    int account_no;
    string account_holder_name;
    double balance;
    double minimum_balance;

public:
    void create_account(int acc_no, const string &holder_name, double initial_balance, double min_balance)
    {
        account_no = acc_no;
        account_holder_name = holder_name;
        balance = initial_balance;
        minimum_balance = min_balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(double amount)
    {
        if (balance - amount >= minimum_balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance. Withdrawal failed.\n";
        }
    }

    void balance_inquiry()
    {
        cout << "Account No: " << account_no << "\n";
        cout << "Account Holder Name: " << account_holder_name << "\n";
        cout << "Balance: " << balance << "\n";
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