class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>freq(101,0);
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            int x=nums[i];
            c+=freq[x];
            freq[x]++;
        }
        return c;
    }
};