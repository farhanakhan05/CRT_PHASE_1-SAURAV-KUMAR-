#include<iostream>
using namespace std;
class Player{
    public:
    
    virtual void show(){
        cout<<"Player class"<<endl;
    }
};

class Cricketers:public Player{
    public:
    int a;
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