class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        int sum=0,res=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>=target&&i<=j){
                res=min(res,j-i+1);
                sum-=nums[i++];
            }
            j++;
        }
        return res==INT_MAX?0:res;
    }
};