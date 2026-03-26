class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]>0&&nums[i]<n){
                int j=nums[i]-1;
                if(nums[i]!=nums[j]){
                    swap(nums[i],nums[j]);
                    continue;
                }
            }
            i++;
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j+1){
                return j+1;
            }
        }
        return n+1;
    }
};