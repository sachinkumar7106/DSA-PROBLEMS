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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,root->val));
        while(!q.empty()){
            TreeNode*curr=q.front().first;
            int currsum=q.front().second;
            q.pop();
            if(!curr->left&&!curr->right&&currsum==targetSum){
                return true;
            }
            if(curr->left){
                q.push(make_pair(curr->left,currsum+curr->left->val));
            }
            if(curr->right){
                q.push(make_pair(curr->right,currsum+curr->right->val));
            }
        }
        return false;
    }
};