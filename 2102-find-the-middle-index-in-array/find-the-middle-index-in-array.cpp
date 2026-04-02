class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n,0);
        vector<int>suf(n,0);
        int presum=0;
        int sufsum=0;
        for(int i=0;i<n;i++)
        {   
            presum+=nums[i];
            pre[i]=presum;
            sufsum+=nums[n-i-1];
            suf[n-i-1]=sufsum;
        }
        for(int i=0;i<n;i++){
            if(pre[i]==suf[i]){
                return i;
            }
        }
        return -1;
    }
};