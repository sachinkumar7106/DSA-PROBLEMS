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
    void dfs(TreeNode* root,int &leftvalue,int &leftdepth,int depth){
        if(!root){return;}
        if(leftdepth<depth){
            leftvalue=root->val;
            leftdepth=depth;
        }
        dfs(root->left,leftvalue,leftdepth,depth+1);
        dfs(root->right,leftvalue,leftdepth,depth+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        int value=-1;
        int leftdepth=-1;
        dfs(root,value,leftdepth,0);
        return value;
    }
};