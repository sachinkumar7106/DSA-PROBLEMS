/*struct Node
{
    int data;
    Node *left, *right;
};*/
Node* postbst(int post[],int &index,int lower ,int upper){
    if(index<0||post[index]<lower||post[index]>upper){
        return NULL;
    }
    Node* temp=new Node(post[index--]);
    temp->right=postbst(post,index,temp->data,upper);
    temp->left=postbst(post,index,lower,temp->data);
    return temp;
}
Node *constructTree(int post[], int size) {
    // code here
    int ind=size-1;
    return postbst(post,ind,INT_MIN,INT_MAX);    
}