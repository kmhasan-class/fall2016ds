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
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance = balance - amount;
    }

    double getBalance() {
        return balance;
    }
    // implement the other functions and the constructor
};

int main() {
    BankAccount a;
    // a.deposit(100);
    // write some code to test it out
    a.withdraw(-10000);
    cout << a.getBalance() << endl;
    return 0;
}
