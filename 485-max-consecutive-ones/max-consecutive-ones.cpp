class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start=0,end=0,max_cons_ones=0;
        while(end<nums.size()){
            if(nums[end]==1){
                max_cons_ones=max(end-start+1,max_cons_ones);
                end++;
            }else{
                start=end+1;
                end++;
            }
        }
        return max_cons_ones;
    }
};