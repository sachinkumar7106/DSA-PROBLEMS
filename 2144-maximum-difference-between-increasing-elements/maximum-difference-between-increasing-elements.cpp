class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff=-1;int min=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<=min){
                min=nums[i];
            }else{
                maxdiff=max(maxdiff,nums[i]-min);
            }
        }
        return maxdiff;
    }
};