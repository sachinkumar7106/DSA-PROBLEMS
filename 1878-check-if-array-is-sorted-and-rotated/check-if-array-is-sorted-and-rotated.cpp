class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return true;
        }
        int changecount=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                changecount++;
                if(changecount>1){
                    return false;
                }
            }
        }
        if(nums[0]<nums[n-1]){
            changecount++;
        }
        return changecount<=1;
    }
};