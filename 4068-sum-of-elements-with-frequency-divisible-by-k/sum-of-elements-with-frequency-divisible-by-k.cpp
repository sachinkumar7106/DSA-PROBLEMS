class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for (int n:nums){
            map[n]++;
        }
        int count=0;
        for(auto itr:map){
            if(itr.second%k==0){
                count+=(itr.second*itr.first);
            }
        }
        return count;
    }
};