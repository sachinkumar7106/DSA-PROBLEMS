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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        deque<vector<int>>result;
        queue<TreeNode*>q;
        if(!root){
            return {};
        }
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int si=q.size();
            for(int i=0;i<si;i++){
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
            result.push_front(temp);
        }
        return vector<vector<int>>(result.begin(),result.end());
    }
};