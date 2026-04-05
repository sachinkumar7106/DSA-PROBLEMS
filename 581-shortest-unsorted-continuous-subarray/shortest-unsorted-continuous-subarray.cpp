class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int min=INT_MAX,max=INT_MIN;
        while(l<r&&nums[l]<=nums[l+1]){
            l++;
        }
        while(l<r&&nums[r]>=nums[r-1]){
            r--;
        }
        if (l >= r) return 0;
        for(int k=l;k<=r;k++){
            if(nums[k]<min){
                min=nums[k];
            }
            if(nums[k]>max){
                max=nums[k];
            }
        }
        while(l>0&&nums[l-1]>min){
            l--;
        }
        while(r<n-1&&nums[r+1]<max){
            r++;
        }
        return r-l+1;
    }
};