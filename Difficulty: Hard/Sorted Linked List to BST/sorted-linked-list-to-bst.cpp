/*
struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; */
class Solution {
  public:
    TNode* builder(vector<int>&vec,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid=start+(end-start+1)/2;
        TNode*temp=new TNode(vec[mid]);
        temp->left=builder(vec,start,mid-1);
        temp->right=builder(vec,mid+1,end);
        return temp;
    }
    
    TNode *sortedListToBST(LNode *head) {
        // code here
        vector<int> vec;
        while(head){
            vec.push_back(head->data);
            head=head->next;
        }
        
        int last=vec.size()-1;
        return builder(vec,0,last);
    }
    
};