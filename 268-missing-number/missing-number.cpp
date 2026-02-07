class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expected_Sum = n*(n+1)/2;
        int given_sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            given_sum += nums[i];
        }
        int sum = expected_Sum - given_sum;
        return sum;
    }
};