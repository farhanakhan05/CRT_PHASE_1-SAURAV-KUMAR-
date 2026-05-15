#include <iostream>
using namespace std;
class stack{
    private:
    int arr[100];
    int top;
    int a;
    public:
    stack(){
        top = -1;
    }
    void push(int x){
        if(top==99){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
int topelement(){
    if(top==-1){
        return arr[top];
    }
    else{
        cout<<"Stack is empty"<<endl;    
    }}
    int size(){
        if(top>=0){
        return ++top;}
        else {
            cout<<"Stack is empty"<<endl;
        } 
    }
    bool isEmpty(){
        if(top<=-1){
            return true;
        }
        else{
            return false;

}}};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    cout<<"Top element: "<<s.topelement()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Is stack empty? "<<s.isEmpty()<<endl;
    s.pop();
    cout<<"Top element: "<<s.topelement()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Is stack empty? "<<s.isEmpty()<<endl;
    return 0;

}