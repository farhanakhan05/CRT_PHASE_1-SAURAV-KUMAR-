#include <iostream>
using namespace std;
class car{
    private:
    const int speed;
    public:
    car(){
        speed = 120; // Initialize the const member variable in the constructor}
    void show()const
    {
        //speed = 100; // Error: cannot modify a const member variable
        cout<<"Speed: "<<speed<<endl;
    }
};
int main(){
    car c1(); // Initialize the const member variable
    c1.show();
    return 0;
}