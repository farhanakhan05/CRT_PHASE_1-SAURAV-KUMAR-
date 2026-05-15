#include<iostream>
using namespace std;

class ListNode{
public:
    ListNode* middleNode(ListNode* head) {
       ListNode *curr = head;
       int count =0;
       while(curr!=NULL)
       {count++;
         curr = curr->next;
       }
       int mid = count/2;
       if(count%2!=0)
       {
        for(int i=1; i<=mid; i++){
            head=head->next;
        }
       }
       return head;
    }
};

int main(){ 
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);
    ListNode *fifth = new ListNode(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    middleNode(head);
     return 0;
}