/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        if(root==NULL){
            return {};
        }
        queue<Node*> q;
        vector<vector<int>>ans;
        int lev=0;
        
        q.push(root);
        while(!q.empty()){
            int qsize=q.size();
            ans.push_back({});
            for(int i=0;i<qsize;i++){
                Node* temp=q.front();
                q.pop();
                ans[lev].push_back(temp->data);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            lev++;
        }
        return ans;
    }
};