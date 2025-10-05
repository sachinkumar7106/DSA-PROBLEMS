class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int xo_r=0;
        for (int num:nums){
            xo_r^=num;
        }
        if(xo_r!=0) return n;

        bool zeroarray=true;
        for(int num:nums){
            if(num!=0){
                zeroarray=false;
                break;
            }
        }
        if(zeroarray){
            return 0;
        }
        return n-1;
    }
};