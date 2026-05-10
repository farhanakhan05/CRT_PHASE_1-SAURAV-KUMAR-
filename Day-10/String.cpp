#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1 = "Hello";
    string str2 = "Jecrc";
    cout<<str1 << " " << str2 << endl; // Output: Hello Jecrc
    //methods of string

    //1 length() - returns the length of the string
    int n = str1.length();
    cout<<"length of string is: " << n << endl; // Output: length of string is: 5

    //2 Append() - adds a string to the end of another string
    cout<<"after appending String is:"<<str1.append("Student")<<endl; // Output: after appending String is: HelloStudent

    //3 empty() - checks if the string is empty or not
    cout<<"is string empty? "<<str1.empty()<<endl; // Output: is string empty? 0

    //4 concat() - concatenates two strings
    cout<<"after concatenating string is: "<<str1 + "Bacho"<<endl; // Output: after concatenating string is: HelloStudentBacho

    //5 push_back() - adds a character to the end of the string
    cout<<"after pushing back character is: "<<str2.push_back('U')<<endl; // Output: after pushing back character is: JecrcU

    //6 pop_back() - removes the last character from the string
    cout<<"after popping back character is: "<<str2.pop_back()<<endl; // Output: after popping back character is: Jecrc

    //7 find() - finds the first occurrence of a substring in the string
    cout<<"index of substring is: "<<str1.find("ello")<<endl; // Output: index of substring is: 1

    //8 swap() - swaps the contents of two strings
    str1.swap(str2);
    cout<<"after swapping string is: "<<endl;
    cout<<"str1: "<<str1<<endl; // Output: str1: Jecrc
    cout<<"str2: "<<str2<<endl; // Output: str2: HelloStudent

    //9 substr() - returns a substring of the string
    cout<<"substring is: "<<str1.substr(5,6)<<endl; // Output: substring is: Studen

    //10 getline() - reads a line of text from the input
    string str3;
    getline(cin, str3);
    cout<<"you entered: "<<str3<<endl; // Output: you entered: (whatever the user entered)

    return 0;
}