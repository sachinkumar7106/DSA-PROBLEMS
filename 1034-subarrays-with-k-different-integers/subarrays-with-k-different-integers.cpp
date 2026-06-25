class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int i=0,j=0,ans=0;
        int n=nums.size(),count=0;
        unordered_map<int,int>mp;
        while(j<n){
            mp[nums[j]]++;
            if(mp[nums[j]]==1){
                count++;
            }
            while(count==k){
                ans+=n-j;
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    count--;
                }
                i++;
            }
            j++;
        }
        i=0,j=0,count=0;
        mp.clear();
        k++;
        while(j<n){
            mp[nums[j]]++;
            if(mp[nums[j]]==1){
                count++;
            }
            while(count==k){
                ans-=n-j;
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    count--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};