#include<iostream>
using namespace std;
class Student
{
    public:
    //data members
    string name;
    int roll_no;

    //default constructor
    Student()
    {
        name = "Farhana";
        roll_no = 23BCON1978;
    }
    //print
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Default constructor is called"<<endl;
    }
};
int main()
{Student s;
    //call member function
    s.show();
    return 0;
}