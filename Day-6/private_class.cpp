#include <iostream>
using namespace std;
class Student
{
    private:
    //data member
    int reg_no=1000;
    public:
    //data members
    string name;
    int roll_no;
    //member function
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Reg No: "<<reg_no<<endl;
        reg_no++;
    }
//can access private data member
    };
int main()
{Student s1, s2;
    s1.name = "Farhana";
    s1.roll_no = 23BCON1978;
    s2.name = "Ayesha";
    s2.roll_no = 23BCON1979;
    //call member function
    s1.display();
    s2.display();
    return 0;
}