#include<iostream>
using namespace std;
int sumofDigits(int n)
{
    if(n==0){
    return 0;
    }
    return (n%10)+sumofDigits(n/10);
};

int main(){
    int n = 5137;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"sum of "<<n<<" is "<<sumofDigits(n)<<endl;
     return 0;
}
