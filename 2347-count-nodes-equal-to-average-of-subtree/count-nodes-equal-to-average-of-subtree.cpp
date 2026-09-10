/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,int &sum,int&count,int &ans){
        if(!root){
            sum=0;
            count=0;
            return;
        }
        int lsum=0,lcount=0,rsum=0,rcount=0;
        dfs(root->left,lsum,lcount,ans);
        dfs(root->right,rsum,rcount,ans);
        sum=lsum+rsum+root->val;
        count=lcount+rcount+1;
        if(root->val==(sum/count)){
            ans++;
        }
    }
    int averageOfSubtree(TreeNode* root) {
        int sum=0,count=0,ans=0;
        dfs(root,sum,count,ans);
        return ans;     
    }
};