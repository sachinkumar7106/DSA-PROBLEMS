class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0){return 0;}
        int i=0,j=0,n=nums.size();
        int product=1;
        int count=0;
        while(j<n){
            product*=nums[j];
            while(product>=k&&i<=j){
                product/=nums[i];
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
};