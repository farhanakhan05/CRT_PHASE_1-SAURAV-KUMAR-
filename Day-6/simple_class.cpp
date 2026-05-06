#include<iostream>
using namespace std;
class Student
{
    public:
    //data members
    string name;
    int roll_no;
    //member function
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
int main()
{Student s;
    s.name = "Farhana";
    s.roll_no = 23BCON1978;
    //call member function
    s.display();
    return 0;
}