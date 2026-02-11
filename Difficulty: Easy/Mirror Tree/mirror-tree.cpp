/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void mirror(Node* root) {
        // code here
        if(!root){
            return;
        }
        Node* temp=root->right;
        root->right=root->left;
        root->left=temp;
        // left
        mirror(root->left);
        // right
        mirror(root->right);
    }
};