class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n){
            int j=nums[i]-1;
            if(nums[i]!=nums[j]){
                swap(nums[i],nums[j]);
            }else{
                i++;
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]-1!=j){
                return{nums[j],j+1};
            }
        }
        return{};
    }
};