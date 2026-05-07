#include<iostream>
using namespace std;
class Cricketers{
    public:
    string name;
    int runs;
    double avg;
    //parameterized constructor
    Cricketers(string n, int r, double avg)

    {
        name = n;
        runs = r;
        this->avg = avg; //this pointer is used to resolve the ambiguity
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<avg<<endl;
    }
};
int main()
{
    Cricketers c1("Virat Kohli", 12000, 58.16);
    c1.show();
    return 0;
}