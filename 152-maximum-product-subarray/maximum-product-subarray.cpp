class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int leftprod=1;
        int rightprod=1;
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            leftprod=leftprod==0?1:leftprod;
            rightprod=rightprod==0?1:rightprod;
            leftprod*=nums[i];
            rightprod*=nums[n-i-1];
            ans=max(ans,max(leftprod,rightprod));
        }
        return ans;
    }
};