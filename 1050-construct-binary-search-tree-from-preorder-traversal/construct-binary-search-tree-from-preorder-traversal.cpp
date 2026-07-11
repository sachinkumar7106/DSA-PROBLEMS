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
    TreeNode* bst(vector<int>&pre,int &index,int lower ,int upper){
        if(index==pre.size()||pre[index]<lower||pre[index]>upper){
            return NULL;
        }
        TreeNode* temp=new TreeNode(pre[index++]);
        temp->left=bst(pre,index,lower,temp->val);
        temp->right=bst(pre,index,temp->val,upper);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int l=INT_MIN;
        int r=INT_MAX;
        int ind=0;
        return bst(preorder,ind,l,r);
    }
};