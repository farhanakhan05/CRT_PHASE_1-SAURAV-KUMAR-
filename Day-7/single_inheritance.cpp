#include<iostream>
using namespace std;
class Player{
    public:
    string name;

    void setname(string n){
        name = n;
    }};

    //derived class
    class Cricketers:public Player{
        public:
        int runs;

        void setruns(int r){
            runs = r;
        }

        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Runs: "<<runs<<endl;
        }
    };

int main()
{
    int r;
    cin>>r;
    Cricketers c1;
    c1.setname("Virat Kohli");
    c1.setruns(r);
    c1.show();
    return 0;
}