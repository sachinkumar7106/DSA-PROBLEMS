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

class box{
public:
    bool bst;
    int sum;
    int min,max;
    box(){
        bst=1;
        sum=0;
        min=INT_MAX;
        max=INT_MIN;
    }
};

class Solution {
public:
    box* find(TreeNode*root,int &maxsum){
        //root doesn't exist
        if(!root){
            return new box();
        }
        //root exist
        box* left=find(root->left,maxsum);
        box* right=find(root->right,maxsum);
        if(left->bst&&right->bst&&left->max<root->val&&right->min>root->val){
            box*head=new box();
            head->sum=left->sum+right->sum+root->val;
            head->min=min(root->val,left->min);
            head->max=max(root->val,right->max);
            maxsum=max(maxsum,head->sum);
            return head;
        }
        else{
            left->bst=0;
            return left;
        }
    }
    int maxSumBST(TreeNode* root) {
        int maxsum=0;
        find(root,maxsum);
        return maxsum;
    }
};