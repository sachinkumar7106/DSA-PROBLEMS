class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxsum=0,n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxsum=sum;
        for(int i=k;i<n;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            maxsum=max(sum,maxsum);
        }
        return (maxsum/k);
    }
};