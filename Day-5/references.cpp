#include<iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int b = 20;
    // int &ref = a; // reference to an integer variable
    // cout<<"The value of a is: "<<a<<endl; // Output: 10
    // cout<<"The value of b is: "<<b<<endl; // Output: 20
    // cout<<"The value of ref is: "<<ref<<endl; // Output: 10
    // ref = 30; // modifying the value through reference
    // cout<<"The value of a after modifying ref is: "<<a<<endl; // Output: 30

    int a = 10;
    int b = a; // b is a copy of a
    int &ref = a; // ref is a reference to a
    cout<<"The value of a is: "<<a<<endl; // Output: 10
    cout<<"The value of b is: "<<b<<endl; // Output: 10
    ref = 20; // modifying the value through reference
    cout<<"The value of a after modifying ref is: "<<a<<endl; // Output: 20
    cout<<"The value of b after modifying ref is: "<<b<<endl; // Output: 10 (b is unaffected by changes to a)
    return 0;
}