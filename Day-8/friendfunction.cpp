#include<iostream>
using namespace std;
class Area{
    private:
    int length;
    int breadth;
    public:
    void setSides(int l, int w){
        length = l;
        breadth = w;
    }
    friend void showArea(Area a);
};
  void showArea(Area b){
    int area = b.length* b.breadth;
    cout<<"Area:"<<area<<endl;
  }
  int main(){
    Area a;
    a.setSides(5, 10);
    showArea(a);
    return 0;
  }