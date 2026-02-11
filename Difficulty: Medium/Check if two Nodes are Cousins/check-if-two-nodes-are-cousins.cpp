/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to check if two nodes are cousins in a tree
    bool parent(Node* root,int a,int b){
        if(!root){
            return 0;
        }
        if(root->left&&root->right){
            if(root->left->data==a&&root->right->data==b){
                return 1;
            }
            if(root->left->data==b&&root->right->data==a){
                return 1;
            }
        }
        return parent(root->left,a,b)||parent(root->right,a,b);
    }
    bool isCousins(Node* root, int x, int y) {
        // write code here
        if(x==y)return 0;
        queue<Node*>q;
        q.push(root);
        int l1=-1,l2=-1;
        int level=0;
        while(!q.empty()){
            int n=q.size();
            l1=-1;l2=-1;
            while(n--){
                Node* temp=q.front();
                q.pop();
                if(temp->data==x){
                    l1=level;
                }
                if(temp->data==y){
                    l2=level;
                }
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(l1!=-1&&l2!=-1){
                return !parent(root,x,y);
            }
            if(l1!=-1||l2!=-1)
            {
                return 0;
            }
            level++;
        }
        return 0;
    }
};
