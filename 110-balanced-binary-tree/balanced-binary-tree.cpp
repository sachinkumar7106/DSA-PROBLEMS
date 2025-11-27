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
int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftH=maxDepth(root->left);
        int rightH=maxDepth(root->right);
        if(leftH<0||rightH<0){
            return -1;
        }
        if(abs(leftH-rightH)>1){
            return -1;
        }
        return max(leftH,rightH)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(maxDepth(root)==-1){
            return false;
        }else{
            return true;
        }
    }
};