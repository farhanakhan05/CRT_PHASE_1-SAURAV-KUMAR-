#include<iostream>
using namespace std;
class Player{
    public:
    
    virtual void show() = 0; //Pure virtual function
};

class Cricketers:public Player{
    public:
    int a;
    ///Implementation needed for pure virtual function
    void show(){
        cout<<"Cricketers class"<<endl;
    }
    };

    int main()
    {
        Cricketers c1;
        c1.show();
        return 0;
    }