#include<iostream>
using namespace std;
void ReverseString(string str){
    int n = str.length();
    int i = 0;
    int j = n-1;
    while(i<j){
       swap(str[i], str[j]);
        i++;
        j--;
    }
    cout<<str<<endl;
};

int main(){
    string s = "Hello";
    ReverseString(s);
    return 0;
}