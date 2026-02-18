/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

Node*reverseLL(Node*head){
    if(head==NULL||head->next==NULL){return head;}
    Node*curr=head;
    Node*prev=NULL;
    Node*Next;
    while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        Node*head1=reverseLL(head);
        Node*curr=head1;
        Node*prev=NULL;
        int carry=1;
        while(curr!=NULL){
            int temp=curr->data + carry;
            curr->data=temp%10;
            carry=temp/10;
            prev=curr;
            curr=curr->next;
        }
        if(carry){
            Node*temp=new Node(carry);
            prev->next=temp;
        }
        return reverseLL(head1);
        // return head of list after adding one
    }
};