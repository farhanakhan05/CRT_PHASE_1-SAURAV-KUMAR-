#include<iostream>
using namespace std;
void applyDiscount(double &bill) { // Pass by reference
    double discount = 0.10; // 10% discount
    bill -= bill * discount; // Apply discount to the original amount
}
int main()
{
    double bill = 250.50;
    cout<<"Original Bill: "<<bill<<endl;
    applyDiscount(bill);
    cout<<"Bill after discount: "<<bill<<endl;
    return 0;
}