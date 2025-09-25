class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3){
            return nums[nums.size()-1];
        }
        int count=1,maxi=nums[nums.size()-1],firstMax=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]!=maxi){
                count++;
                maxi=nums[i];
            }
            if(count==3){
                return maxi;
            }
        }
        return firstMax;
    }
};