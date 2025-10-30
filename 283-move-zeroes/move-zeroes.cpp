class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }else{
                nums[index++]=nums[i];
            }
        }
        for(int i=0;i<count;i++){
            nums[index++]=0;
        }
    }
};