#include <iostream>
using namespace std;
class ATM {
private:
    int balance;
public:
//encapsulation
    void setBalance(int balance) {
        this->balance = balance;
    }
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    int getBalance() {
        return balance;
    }
};
int main() {
    int n;
    cin>>n;
    ATM a;
    a.setBalance(n);
    cout<<"Balance: " << a.getBalance() << endl;
    a.withdraw(500);
    cout<<"Balance: " << a.getBalance() << endl;
    return 0;
}