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
    void findlar(TreeNode* root,int depth,vector<int>&result){
        if(!root){
            return;
        }
        if(depth==result.size()){
            result.push_back(root->val);
        }
        if(result[depth]<root->val){
            result[depth]=root->val;
        }
        findlar(root->left,depth+1,result);
        findlar(root->right,depth+1,result);
    }
    vector<int> largestValues(TreeNode* root) {
        if(!root){return{};}
        vector<int>result;
        findlar(root,0,result);
        return result;
    }
};