#include <iostream>
using namespace std;
#include <string>

class BankAccount {
private:
    string depositorName;
    long long accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(const string& name, long long accNum, const string& type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance <<endl;
        } else {
            cout << "Invalid deposit amount." <<endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance <<endl;
        } else {
            cout << "Insufficient balance or invalid withdrawal amount." <<endl;
        }
    }

    void displayDetails() {
        cout << "Account Details:" <<endl;
        cout << "Depositor Name: " << depositorName <<endl;
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Account Type: " << accountType <<endl;
        cout << "Balance: " << balance << endl;
    }

    bool isCredit() const {
        return balance > 0;
    }
};

int main() {
    BankAccount myAccount("kamalesh ", 123456789, "Savings", 1000.0);
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.displayDetails();
    if (myAccount.isCredit()) 
    
    return 0;
}