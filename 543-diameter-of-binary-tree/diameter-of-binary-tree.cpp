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
    int ht(TreeNode* root){
        if(!root){
            return 0;
        }
        return 1+max(ht(root->left),ht(root->right));
    }   
    void dia(TreeNode*root,int &diameter){
        if(!root){
            return;
        }

        int left=ht(root->left);
        int right=ht(root->right);
        diameter=max(diameter,left+right);
        dia(root->left,diameter);
        dia(root->right,diameter);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diam=0;
        dia(root,diam);
        return diam;
    }
};