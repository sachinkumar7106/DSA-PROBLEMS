class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxones=0;int ones=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ones=0;
            }
            else{
                ones++;
            }
            maxones=max(ones,maxones);
        }
        return maxones;
    }
};