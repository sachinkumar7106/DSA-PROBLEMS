class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=1,high=n-2,mid;
        while (low<=high){
            mid=low+(high-low)/2;
            // peak element
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
};