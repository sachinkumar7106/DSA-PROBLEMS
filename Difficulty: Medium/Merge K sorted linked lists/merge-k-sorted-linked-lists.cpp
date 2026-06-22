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
    class compare{
        public:
        bool operator()(Node *a,Node*b){
            return a->data>b->data;
        }
    };
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        priority_queue<Node *,vector<Node*>,compare>q(arr.begin(),arr.end());
        
        Node*dummy=new Node(0);
        Node*curr=dummy;
        Node*temp;
        while(!q.empty()){
            temp=q.top();
            q.pop();
            curr->next=temp;
            curr=curr->next;
            if(temp->next)
            q.push(temp->next);
        }
        return dummy->next;
    }
};