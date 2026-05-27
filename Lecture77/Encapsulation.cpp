#include<iostream>

using namespace std;

class BankAccount {

    private:
    int balance;

    public:
    int withdraw(int amount) {

        if(amount > balance) {
            cout << "Amount cannot be more than balance " << endl;
            return -1;
        }

        balance -= amount;
        cout << "Amount " << amount << " is withdrawn" << endl;

        return amount;
    }

    int deposit(int amount) {

        if(amount < 0) return -1;

        balance += amount;

        cout << "Amount " << amount << " is deposited" << endl;

        return balance;
    }

    // getter
    int getBalance() {
        return balance;
    }

    // setter
    // void setBalance(int b) {
    //     balance = b;
    // }
};

int main() {

    BankAccount *b1 = new BankAccount();

    b1->deposit(100);
    b1->deposit(200);

    b1->withdraw(400);


    // b1->balance = 10000000;


    cout << b1->getBalance()<< endl;



    return 0;
}