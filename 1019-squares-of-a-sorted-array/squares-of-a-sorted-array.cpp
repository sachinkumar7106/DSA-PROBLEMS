class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1,k=n-1;
        vector<int>ans(n,0);
        while(l<=r){
            int lsqr=nums[l]*nums[l];
            int rsqr=nums[r]*nums[r];
            if(lsqr<=rsqr){
                ans[k--]=rsqr;
                r--;
            }else{
                ans[k--]=lsqr;
                l++;
            }
        }
        return ans;
    }
};