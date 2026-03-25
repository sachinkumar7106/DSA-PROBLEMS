// User function Template for C++

class Solution {
  public:
    void bst(int arr[],int&index,int lower ,int upper,int N){
        if(index==N||arr[index]<lower||arr[index]>upper){
            return;
        }
        int value=arr[index++];
        bst(arr,index,lower,value,N);
        bst(arr,index,value,upper,N);
        return;
    }
    int canRepresentBST(int arr[], int N) {
        // code here
        int i=0;
        bst(arr,i,INT_MIN,INT_MAX,N);
        return i==N;
    }
};