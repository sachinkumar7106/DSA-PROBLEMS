class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n){
            int j=nums[i];
            if(j<n&&nums[i]!=nums[j]){
                swap(nums[i],nums[j]);
            }
            else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return n;
    }
};