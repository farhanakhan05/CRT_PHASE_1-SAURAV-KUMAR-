#include<iostream>
using namespace std;
class Player{
    public:
    string name;

    void setname(string n){
        name = n;
    }};

    class Cricketers{
        public:
        int runs;

        void setruns(int r){
            runs = r;
        }};

    class IndianCricketers:public Cricketers ,public Player{
        public:
        string state;

        void setstate(string c){
            state = c;
        }

        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Runs: "<<runs<<endl;
            cout<<"State: "<<state<<endl;
        }
    };

    int main()
    {
        int r;
        string s;
        cin>>r>>s;
        IndianCricketers c1;
        c1.setname("Virat Kohli");
        c1.setruns(r);
        c1.setstate(s);
        c1.show();
        return 0;
    }