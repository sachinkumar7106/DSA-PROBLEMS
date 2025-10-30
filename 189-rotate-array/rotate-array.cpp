class Solution {
public:
    // void rotate_arr(vector<int>& nums,int start,int end){
    //     while(start<end){
    //         swap(nums[start],nums[end]);
    //         start++;
    //         end--;
    //     }
    // }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};