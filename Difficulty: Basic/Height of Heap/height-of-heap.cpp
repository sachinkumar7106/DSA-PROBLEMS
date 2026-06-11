class Solution {
  public:
    int heapHeight(int n, int arr[]) {
        // code here
        if(n==1){
            return 1;
        }
        int  count=0;
        while(n!=1){
            count++;
            n/=2;
        }
        return count;
    }
};