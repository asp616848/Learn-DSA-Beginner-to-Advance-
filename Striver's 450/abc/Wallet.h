#ifndef WALLET_H
#define WALLET_H

// Forward declaration of Admin class

class Wallet {
private:
    double balance;
    static int count;
    friend class Admin;
public:
    int id;
    Wallet();
    Wallet(double);
    Wallet(Wallet&);
    double getBalance();
    double topUp(double);
    bool sendMoney(Wallet&, double);
};

#endif
