class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>p(n,1);
        vector<int>s(n,1);
        int pmul=1,smul=1;
        for(int i=1;i<n;i++){
            pmul*=nums[i-1];
            p[i]=pmul;
            smul*=nums[n-i];
            s[n-i-1]=smul;
        }
        for(int i=0;i<n;i++){
            ans[i]=p[i]*s[i];
        }
        return ans;
    }
};