/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class box{
    public:
    bool isbst;
    int size;
    int min,max;
    box(int data){
        isbst=1;
        size=1;
        min=data;
        max=data;
    }
};
class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    box* find(Node*root,int&totalsize){
        if(!root->left&&!root->right){
            totalsize=max(totalsize,1);
            return new box(root->data);
        }else if(!root->left&&root->right){
            box*head=find(root->right,totalsize);
            if(head->isbst&&head->min>root->data){
                head->size++;
                head->min=root->data;
                totalsize=max(totalsize,head->size);
                return head;
            }
            else{
                head->isbst=0;
                return head;
            }
        }else if(root->left&&!root->right){
            box*head=find(root->left,totalsize);
            if(head->isbst&&head->max<root->data){
                head->size++;
                head->max=root->data;
                totalsize=max(totalsize,head->size);
                return head;
            }
            else{
                head->isbst=0;
                return head;
            }
        }
        else{
            box* left=find(root->left,totalsize);
            box* right=find(root->right,totalsize);
            if(left->isbst&&right->isbst&&left->max<root->data&&right->min>root->data){
                box* head=new box(root->data);
                head->size+=left->size+right->size;
                head->min=left->min;
                head->max=right->max;
                totalsize=max(totalsize,head->size);
                return head;
            }else{
                left->isbst=0;
                return left;
            }
        }
    }
    int largestBst(Node *root) {
        // Your code here
        int totalsize=0;
        find(root,totalsize);
        return totalsize;
    }
};