/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;

};
*/

class Solution {
  public:
    void correctBST(Node* root) {
        // add code here.
        Node* curr=NULL;
        Node* first=NULL,*second=NULL;
        Node* last=NULL,*present=NULL;
        while(root){
            if(!root->left){
                last=present;
                present=root;
                if(last&&last->data>present->data){
                    if(!first){
                        first=last;
                    }
                    second=present;
                }
                root=root->right;
            }else{
                curr=root->left;
                while(curr->right&&curr->right!=root){
                    curr=curr->right;
                }
                if(!curr->right){
                    curr->right=root;
                    root=root->left;
                }
                else{
                    curr->right=NULL;
                    last=present;
                    present=root;
                    if(last&&last->data>present->data){
                        if(!first){
                            first=last;
                        }
                        second=present;
                    }
                    root=root->right;
                }
            }
        }
        swap(first->data,second->data);
    }
};