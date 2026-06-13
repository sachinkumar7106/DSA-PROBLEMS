class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<int>kheap;
        for(int i=0;i<k;i++){
            kheap.push(arr[i]);
        }
        for(int i=k;i<n;i++){
            if(kheap.top()>arr[i]){
                kheap.pop();
                kheap.push(arr[i]);
            }
        }
        return kheap.top();
    }
};