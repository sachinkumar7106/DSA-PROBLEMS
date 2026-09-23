class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        int target=sum-x;
        
        int cur=0;
        int maxwin=-1;
        int l=0;

        for(int r=0;r<nums.size();r++){
            cur+=nums[r];
            while(l<=r&&cur>target){
                cur-=nums[l];
                l++;
            }
            if(cur==target){
                maxwin=max(maxwin,r-l+1);
            }
            
        }
        return maxwin==-1?-1:nums.size()-maxwin; 
    }
};