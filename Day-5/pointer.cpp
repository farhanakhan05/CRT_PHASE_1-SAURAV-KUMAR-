#include<iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int *ptr = &a; // pointer to an integer variable
    // cout<<"The value of a is: "<<a<<endl; // Output: 10
    // cout<<"The address of a is: "<<&a<<endl; // Output: address
    // cout<<"The value of ptr is: "<<ptr<<endl; // Output: address
    // cout<<"The value pointed to by ptr is: "<<*ptr<<endl; // Output: 10
    // return 0;

    int value = 10;
    int *ptr = &value; // ptr is a pointer to value
    cout<<"Address of value: "<<*ptr<<endl; // Output: address of value
    cout<<"Value of value: "<<value<<endl; // Output: 10
    cout<<"Value of ptr: "<<ptr<<endl; // Output: address of value

    *ptr = 20; // modifying the value through pointer
    cout<<"Address of value after modification: "<<*ptr<<endl; // Output: address of value (unchanged)
    cout<<"Value of value after modification: "<<value<<endl; // Output: 20
    return 0;
}