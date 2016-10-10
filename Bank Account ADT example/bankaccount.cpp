#include <string>
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountName;
    string address;
    double balance;

public:
    BankAccount(int newAccountNumber, string newAccountName,
        string newAddress, double newBalance) {
        accountNumber = newAccountNumber;
        accountName = newAccountName;
        address = newAddress;
        balance = newBalance;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance = balance - amount;
    }

    double getBalance() {
        return balance;
    }

    void print() {
        cout << accountNumber << endl << accountName << endl << address << endl << balance << endl;
    }
    // implement the other functions and the constructor
};

int main() {
    BankAccount a(1245, "Md. Rakibul Hasan",
        "24 Kemal Ataturk Avenue", 1000.0);
    // a.deposit(100);
    // write some code to test it out
    a.withdraw(100);
    a.print();
    return 0;
}
