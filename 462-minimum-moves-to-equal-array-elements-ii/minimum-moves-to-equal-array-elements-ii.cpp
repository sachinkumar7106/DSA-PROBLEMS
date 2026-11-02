class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int res=0,n=nums.size();
        sort (nums.begin(),nums.end());
        int mid=nums[n/2];
        for(int i:nums){
            res+=abs(mid-i);
        }
        return res;
    }
};