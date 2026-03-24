class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int lprod=1,rprod=1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            lprod=lprod==0?1:lprod;
            rprod=rprod==0?1:rprod;
            lprod*=nums[i];
            rprod*=nums[n-i-1];
            ans=max(ans,max(lprod,rprod));
        }
        return ans;
    }
};