#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int balance){
        this->balance = balance;
}
void withdraw(int amount){
if(amount>balance){
    cout<<"Insufficient Balance"<<endl;
}
else{
    balance-=amount;
    cout<<"withdrawn : "<<amount<<endl;
}
}
void showbalance()
{
    cout<<"Balance: "<<balance<<endl;
}
};

int main()
{
    ATM a(5000);
    a.showbalance();
    a.withdraw(500);
    a.showbalance();
    return 0;
}