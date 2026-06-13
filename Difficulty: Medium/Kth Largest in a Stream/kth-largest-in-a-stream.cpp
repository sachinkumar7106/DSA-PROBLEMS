class Solution {
  public:
    vector<int> kthLargest(vector<int>& arr, int k) {
        // code here
        
        int n=arr.size();
        vector<int>result(n,-1);
        priority_queue<int,vector<int>,greater<int>>kheap;
        for(int i=0;i<n;i++){
            kheap.push(arr[i]);
            if(kheap.size()>k){
                kheap.pop();
            }
            if(kheap.size()==k){
                result[i]=kheap.top();
            }
        }
        return result;
    }
};