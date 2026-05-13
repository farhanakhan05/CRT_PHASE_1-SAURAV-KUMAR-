#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main(){
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<" "<<n4.data<<" "<<n5.data<<endl;
     return 0;  

}