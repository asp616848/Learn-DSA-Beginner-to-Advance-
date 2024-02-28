class Admin;

class Wallet;

bool Admin::mediateTransfer(Wallet& w1, Wallet& w2, double amount) {
    if (w1.balance >= amount) {
        w1.balance -= amount;
        w2.topUp(amount);
        return true;
    } else {
        return false;
    }
}
