/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void find(Node*root,int pos,int&l,int&r){
        if(!root){
            return;
        }
        l=min(l,pos);
        r=max(r,pos);
        find(root->left,pos-1,l,r);
        find(root->right,pos+1,l,r);
    }
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        int l=0,r=0;
        find(root,0,l,r);
        vector<vector<int>>vec1(r+1);
        vector<vector<int>>vec2(abs(l)+1);
        queue<Node*>q;
        queue<int>ind;
        q.push(root);
        ind.push(0);
        while(!q.empty()){
            Node*temp=q.front();
            q.pop();
            int pos=ind.front();
            ind.pop();
            if(pos>=0){
                vec1[pos].push_back(temp->data);
            }
            else{
                vec2[abs(pos)].push_back(temp->data);
            }
            if(temp->left){
                q.push(temp->left);
                ind.push(pos-1);
            }
            if(temp->right){
                q.push(temp->right);
                ind.push(pos+1);
            }
        }
        vector<vector<int>>ans;
        for(int i=vec2.size()-1;i>0;i--){
            ans.push_back(vec2[i]);
        }
        for(int i=0;i<vec1.size();i++){
            ans.push_back(vec1[i]);
        }   
        return ans;
    }
};