class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expected_sum=n*(n+1)/2;
        int array_sum=0;
        for(int i=0;i<n;i++){
            array_sum+=nums[i];
        }
        return expected_sum-array_sum;
    }
};