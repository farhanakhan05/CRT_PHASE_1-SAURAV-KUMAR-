#include<iostream>
using namespace std;
class Queue{
    private:
    int arr[100];
    int front,rear;
    public:
    Queue(){
        front = 0;
        rear = -1;
    }
    void enqueue(int x){
        if(rear==99){
            cout<<"Queue overflow"<<endl;
        }
        rear++;
        arr[rear] = x;
        cout<<x<<"Inserted into queue"<<endl;
    }
    void dequeue(){
        if(front>rear){
            cout<<"Queue underflow"<<endl;
        }
        else{
            cout<<arr[front]<<"deleted from queue"<<endl;
            front++;
        }
    }
    void peek(){
        if(front>rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Front element: "<<arr[front]<<endl;
        }
    }
    void display(){
        if(front>rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Queue elements: ";
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

};
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.peek();
    q.display();
    return 0;
}