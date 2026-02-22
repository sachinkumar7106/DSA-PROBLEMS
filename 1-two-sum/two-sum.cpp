class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int first=nums[i];
            int second=target-nums[i];
            if(mp.find(second)!=mp.end()){
                return {i,mp[second]};
            }
            mp[first]=i;
        }
        return {};
    }
};