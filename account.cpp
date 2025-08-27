#include <iostream>
using namespace std;

class Account{
    public:
    string accNumber;
    double balance;
    string ownerName;

    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    bool isBalanceMinimum(double amount){
        return (balance - amount) >= 500;
    }

    void withdraw(double amount){
        if (amount > balance){
            cout << "Insufficient balance!" << endl;
        }
        else if (!isBalanceMinimum(amount)){
            cout << "Cannot withdraw: Balance must have a minimum of 500!" << endl;
        }
        else{
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }

    void displayBalance(){
        cout << "Owner: " << ownerName << endl;
        cout << "Current balance: " << balance << endl;
    } 
};

int main(){
    Account account1;
    account1.accNumber = "123456789";
    account1.balance = 10000.0;
    account1.ownerName = "Dang Quang";

    account1.displayBalance();
    account1.deposit(5000);
    account1.displayBalance();
    account1.withdraw(2000);
    account1.displayBalance();
    account1.withdraw(12600);
    account1.displayBalance();
    account1.withdraw(15000);
    account1.displayBalance();
    return 0;
}