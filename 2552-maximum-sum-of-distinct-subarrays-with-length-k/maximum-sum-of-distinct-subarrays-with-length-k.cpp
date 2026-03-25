class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        long long j=0,sum=0,maxsum=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            sum+=nums[i];
            while(mp[nums[i]]>1){
                mp[nums[j]]--;
                sum-=nums[j++];
            }
            if(i-j+1==k){
                maxsum=max(maxsum,sum);
                mp[nums[j]]--;
                sum-=nums[j];
                j++;
            }
        }
        return maxsum;
    }
};