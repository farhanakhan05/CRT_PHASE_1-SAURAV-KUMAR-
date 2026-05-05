#include<iostream>
using namespace std;
int add(int x, int y = 10) { // Default value for y is 10
    return x + y;
}
int main() {
    add(5); // Uses default value for y, so it will be 5 + 10
    cout<<"Result:"<<add(5)<<endl; // Output will be 15
    add(5, 20); // Overrides default value for y, so it will be 5 + 20
    cout<<"Result:"<<add(5, 20)<<endl;
}