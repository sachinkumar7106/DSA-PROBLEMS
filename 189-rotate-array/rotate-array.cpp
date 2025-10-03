class Solution {
public:
    void rotate_arr(vector<int>&arr,int start,int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        rotate_arr(nums,0,nums.size()-1);
        rotate_arr(nums,0,k-1);
        rotate_arr(nums,k,nums.size()-1);                      
    }
};