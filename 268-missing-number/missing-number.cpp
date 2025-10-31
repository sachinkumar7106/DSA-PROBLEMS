class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expected_Sum=0;
        int given_sum=0;
        for(int i=1;i<=nums.size();i++){
            expected_Sum+=i;
        }
        for(int i=0;i<nums.size();i++){
            given_sum+=nums[i];
        }
        expected_Sum-=given_sum;
        return expected_Sum;
    }
};