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
void printNodes(Node*head){
    Node *curr = head;
    Node *temp = NULL;
    while(curr){
        Node *forw  = curr->next;
        curr->next = temp;
        temp = curr;
        curr = forw;
    }
    return temp;
}
int main(){ 
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    printNodes(head);
     return 0;
}