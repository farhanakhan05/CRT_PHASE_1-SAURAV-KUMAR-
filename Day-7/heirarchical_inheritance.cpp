#include<iostream>
using namespace std;
class Player{
    public:
    string name;

    void setname(string n){
        name = n;
    }};

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

    class Footballs:public Player{
        public:
        int goals;

        void setgoal(int g){
            goals = g;
        }

        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Goals: "<<goals<<endl;
        }
    };

    int main()
    {
        int r;
        int g;
        cin>>r>>g;
        Cricketers c1;
        c1.setname("Virat Kohli");
        c1.setruns(r);
        c1.show();

        Footballs f1;
        f1.setname("Sunil Chhetri");
        f1.setgoal(g);
        f1.show();
        return 0;
    }