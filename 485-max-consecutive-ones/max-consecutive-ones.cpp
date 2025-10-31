class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start=0,end=0,max_one=0;
        while(end<nums.size()){
            if(nums[end]==1){
                max_one=max(end-start+1,max_one);
                end++;
            }else{
                start=end+1;
                end++;
            }
        }
        return max_one;
    }
};