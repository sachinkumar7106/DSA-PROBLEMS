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
    void dfs(TreeNode*root,vector<vector<int>>&result,vector<int>&temp,int &target){
        if(!root){return;}
        temp.push_back(root->val);
        target-=root->val;
        if(!root->left&&!root->right&&(target==0)){
            result.push_back(temp);
        }

        dfs(root->left,result,temp,target);
        // target+=temp.back();
        // temp.pop_back();
        dfs(root->right,result,temp,target);
        target+=temp.back();
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>result;
        vector<int>temp;
        dfs(root,result,temp,targetSum);
        return result;
    }
};