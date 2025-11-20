class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=nums.size();
        int low=0,high=nums.size()-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                index=mid;
                high=mid-1;
            }
        }
        return index;
    }
};