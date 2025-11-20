/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node* slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast==NULL||fast->next==NULL){
            return;
        }
        // length of the loop 
        slow=fast->next;
        int count=1;
        while(slow!=fast){
            count++;
            slow=slow->next;
        }
        
        // nodes inside the loop
        slow =head,fast=head;
        // fast ko count distance dur rakhenge 
        while(count--){
            fast=fast->next;
        }
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        //bring slow to last node
        while(slow->next!=fast){
            slow=slow->next;
        }
        slow->next=NULL;
        return;
    }
};