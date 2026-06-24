class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        mp[0]++;
        int sum=0,count=0,rem;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rem=sum%k;
            if(rem<0){
                rem=k+rem;
            }
            if(mp.count(rem)){
                count+=mp[rem]++;
            }else{
                mp[rem]++;
            }
        }
        return count++;
    }
};