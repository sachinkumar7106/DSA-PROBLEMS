class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int domCount = 0;
        int n = nums.size();
        if (n == 1) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (nums[0] >= nums[1]) {
                    domCount++;
                }
            } else if (i == n - 1) {
                if (nums[i] >= nums[i - 1]) {
                    domCount++;
                }
            } else {
                if (2 * nums[i] >= nums[i - 1] + nums[i + 1]) {
                    domCount++;
                }
            }
        }
        return domCount;
    }
};