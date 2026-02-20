class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int ans=0;
        int count=0;
        int n=nums.size();
        while(i<n&&j<n){
            if(nums[j]==1){
                ans=max(j-i+1,ans);
                j++;
            }
            else{
                if(count<k){
                    count++;
                    ans=max(j-i+1,ans);
                    j++;
                }else{
                    if(nums[i]==1){
                        i++;
                    }else{
                        count--;
                        i++;
                    }
                }
            }
        }
        return ans;
    }
};