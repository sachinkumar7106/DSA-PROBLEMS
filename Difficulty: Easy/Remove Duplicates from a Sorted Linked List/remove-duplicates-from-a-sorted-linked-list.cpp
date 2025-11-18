/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node* prev=head,* curr=head->next;
        while(curr){
            if(curr->data==prev->data){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }else{
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
    }
};