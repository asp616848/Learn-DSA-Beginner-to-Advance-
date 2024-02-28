#include <iostream>
class Wallet;
#include "Wallet.cpp"
#include "Admin.cpp"


using namespace std;

int main() {
    Wallet* w1 = new Wallet();
    Wallet* w2 = new Wallet(5000); // initialization of starting balance using all constructors
    Wallet* w3 = new Wallet(*w2);
    double x;
    double y;
    cout << "Enter the amount to topUp in wallet W1\n";
    cin >> x;
    cout << "Enter the amount to topUp in wallet W2\n";
    cin >> y;

    w1->topUp(x);
    w2->topUp(y);

    cout << "\n Balance of Wallet 1: " << w1->getBalance() << endl;
    cout << "Balance of Wallet 2: " << w2->getBalance() << endl;

    cout << "Sending Rs 1600.50 from Wallet 1 to Wallet 2" << endl;

    bool tr1 = w1->sendMoney(*w2, 1600.50);
    tr1 ? cout << "Transaction Done" << endl : cout << "Transaction Failed, Insufficient Funds" << endl; //ternary operator use case

    cout << "New Balance of Wallet 1: " << w1->getBalance() << endl;
    cout << "New Balance of Wallet 2: " << w2->getBalance() << endl;

    delete w1;
    delete w2;
    delete w3;

    return 0;
}