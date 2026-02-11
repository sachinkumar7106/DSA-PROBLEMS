// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        int maxi=0;
        while(!q.empty()){
            int qsize=q.size();
            maxi=0;
            for(int i=0;i<qsize;i++){
                Node*temp=q.front();
                maxi=max(maxi,temp->data);
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};