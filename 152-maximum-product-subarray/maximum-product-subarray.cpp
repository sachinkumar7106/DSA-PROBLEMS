class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0],minprod=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(minprod,maxprod);
            }
            maxprod=max(maxprod*nums[i],nums[i]);
            minprod=min(minprod*nums[i],nums[i]);
            ans=max(maxprod,ans);
        }
        return ans;
    }
};