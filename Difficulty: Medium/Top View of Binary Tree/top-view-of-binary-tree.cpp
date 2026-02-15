/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void find(Node* root,int pos,int &l,int&r){
        if(!root){
            return;
        }
        l=min(l,pos);
        r=max(r,pos);
        find(root->left,pos-1,l,r);
        find(root->right,pos+1,l,r);
    }
    void Tview(Node*root,int pos,vector<int>&ans,vector<int>&level,int lev){
        if(!root){
            return;
        }
        if(level[pos]>lev){
            ans[pos]=root->data;
            level[pos]=lev;
        }
        Tview(root->left,pos-1,ans,level,lev+1);
        Tview(root->right,pos+1,ans,level,lev+1);
    }
    vector<int> topView(Node *root) {
        // code here
        int l=0,r=0;
        find(root,0,l,r);
        vector<int>ans(r-l+1);
        vector<int>level(r-l+1,INT_MAX);
        Tview(root,-l,ans,level,0);
        return ans;
    }
};