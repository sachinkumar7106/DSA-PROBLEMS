class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefix[i]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            suffix[i]=sum;
        }
        for(int i=0;i<n-1;i++){
            if((prefix[i]-suffix[i+1])%2==0){
                ans++;
            }
        }
        return ans;
    }
};