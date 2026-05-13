#include <iostream>
using namespace std;
int Fac(int x){
    if (x==1) ///base case
    return 1;
    return x*Fac(x-1); ///recursive case

};
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Fac(n)<<endl;
    return 0;
}