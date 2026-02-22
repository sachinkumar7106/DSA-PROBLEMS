class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftsum(n,0), rightsum(n,0);
        int lsum = 0, rsum = 0;
        for (int i = 0; i < n; i++) {
            leftsum[i] = lsum;
            lsum += nums[i];
            rightsum[n-1-i]=rsum;
            rsum += nums[n-1-i];
        }
        for(int i=0;i<n;i++){
            int dif=leftsum[i]-rightsum[i];
            if(dif>0){
                nums[i]=dif;
            }else{
                nums[i]= -dif;
            }
        }
        return nums;
    }
};