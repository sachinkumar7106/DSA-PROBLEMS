class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum(nums.size(), 0), rightsum(nums.size(), 0);
        int lsum = 0, rsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            leftsum[i] = lsum;
            lsum += nums[i];
            rightsum[nums.size()-1-i]=rsum;
            rsum += nums[nums.size()-1-i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(leftsum[i]-rightsum[i]);
        }
        return nums;
    }
};