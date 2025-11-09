/* Link list Node

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        int count=1;
        Node*prev=NULL,*curr=head;
        if(k==1){
            return NULL;
        }
        while(curr!=NULL){
            //delete node
            if(count==k){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
                count=1;
            }//skip node 
            else{
                count++;
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};