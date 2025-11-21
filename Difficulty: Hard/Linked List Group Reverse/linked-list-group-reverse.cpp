/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node*first=new Node(0);
        first->next=head;
        head=first;
        
        Node*second,*prev,*curr,*Next;
        while(first->next){
            int x=k;
            second=first->next;
            prev=first;
            curr=first->next;
            Next;
            while(x&&curr){
                Next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=Next;
                x--;
            }
            first->next=prev;
            second->next=curr;
            first=second;
        }
        first=head;
        head=head->next;
        delete first;
        return head;
    }
};