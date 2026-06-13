class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>>kheap;
        for(int i=0;i<k;i++){
            kheap.push(nums[i]);
        }
        for(int i=k;i<n;i++){
            if(kheap.top()<nums[i]){
                kheap.pop();
                kheap.push(nums[i]);
            }
        }
        return kheap.top();
    }
};