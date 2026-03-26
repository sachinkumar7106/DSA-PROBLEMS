class Solution {
  public:
    void rangebst(Node* root,vector<int>&ans,int low,int high){
        if(!root){return;}
        if(root->data>low && root->data>high){
            rangebst(root->left,ans,low,high);
        }else if(root->data<low&&root->data<high){
            rangebst(root->right,ans,low,high);
        }else{
            rangebst(root->left,ans,low,high);
            ans.push_back(root->data);
            rangebst(root->right,ans,low,high);
        }
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        vector<int>ans;
        rangebst(root,ans,low,high);
        return ans;
    }
};