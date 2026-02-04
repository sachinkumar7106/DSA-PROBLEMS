class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currsum=0;
        for (int i=0;i<nums.size();i++){
            nums[i]=nums[i]+currsum;
            currsum=nums[i];
        }
        return nums;
    }
};