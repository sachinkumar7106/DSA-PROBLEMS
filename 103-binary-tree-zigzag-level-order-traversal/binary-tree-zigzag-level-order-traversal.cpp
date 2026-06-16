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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root){
            return {};
        }
        bool flag=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
            }
            if(flag){
                flag=!flag;
            }else{
                flag=!flag;
                reverse(temp.begin(),temp.end());
            }
            res.push_back(temp);
        }
        return res;
    }
};