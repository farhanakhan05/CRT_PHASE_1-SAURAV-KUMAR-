#include<iostream>
using namespace std;

    void swapNUM(int *x, int *y) { // Function to swap values using pointers
        int temp;
        temp = *x; // Store the value at address x in temp
        *x = *y;   // Assign the value at address y to address x
        *y = temp; // Assign the value stored in temp to address y
}
int main()
{
    int a=10, b=20;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    swapNUM(&a, &b); // Pass the addresses of a and b to the swap function
    cout<<"After swapping: a="<<a<<" b="<<b<<endl;
    return 0;
  
}