#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    int sum = add(5, 10);
    cout<<"The sum of 5 and 10 is "<<sum<<endl;
    return 0;
}