/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int burn(Node* root,int &t,int tar){
        if(!root){
            return 0;
        }
        if(root->data==tar){
            return -1;
        }
        int l=burn(root->left,t,tar);
        int r=burn(root->right,t,tar);
        if(l<0){
            t=max(t,abs(l)+r);
            return l-1;
        }
        if(r<0){
            t=max(t,abs(r)+l);
            return r-1;
        }
        return 1+max(l,r);
    }
    void find(Node*root,int target,Node*&burnnode){
        if(!root){
            return;
        }
        if(root->data==target){
            burnnode=root;
            return;
        }
        find(root->left,target,burnnode);
        find(root->right,target,burnnode);
    }
    int height(Node*root){
        if(!root){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    int minTime(Node* root, int target) {
        // code here
        int burntime=0;
        burn(root,burntime,target);
        Node*temp=NULL;
        find(root,target,temp);
        int a=height(temp)-1;
        return max(burntime,a);
    }
};