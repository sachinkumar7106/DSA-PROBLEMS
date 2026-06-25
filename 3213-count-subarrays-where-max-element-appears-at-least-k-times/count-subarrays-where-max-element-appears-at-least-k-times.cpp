class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size();
        int maxi=INT_MIN,maxcount=0;
        long long subcount=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        while(j<n){
            if(nums[j]==maxi){
                maxcount++;
            }
            while(maxcount==k){
                subcount+=(n-j);
                if(nums[i]==maxi){
                    maxcount--;
                }
                i++;
            }
            j++;
        }
        return subcount;
    }
};