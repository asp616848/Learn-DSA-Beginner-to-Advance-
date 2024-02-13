#include "Wallet.h"
#include "Admin.h"
#include <iostream>
using namespace std;

int Wallet::count = 0;

Wallet::Wallet() {
    cout << "Object created and default constructor called" << endl;
    count++;
    id = count;
    balance = 0.0;
    cout << "Balance of this new object is:" << balance<< endl;

}

Wallet::Wallet(double bal) {
    cout << "Object created and parameterized constructor called" << endl;
    count++;
    id = count;
    this->balance = bal;
    cout << "Balance of this new object is :" << balance<< endl;
}

Wallet::Wallet(Wallet& w) {
    cout << "Object created And Copy constructor called!" << endl;
    balance = w.balance;
    count++;
    id = count;
    cout << "Balance of this new object is :" << balance<< endl;
}

double Wallet::getBalance() {
    return balance;
}

double Wallet::topUp(double deposit) {
    balance += deposit;
    return (balance );
}

bool Wallet::sendMoney(Wallet& w, double d) {
    Admin objectAdmin;
    return objectAdmin.mediateTransfer(*this, w, d);
}
