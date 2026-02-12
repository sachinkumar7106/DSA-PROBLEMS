class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>result;
        int i=0,j=0;
        int n=nums.size();
        int k=0;
        while(k<n/2){
            while(!(nums[i]>0)){
                i++;
            }
            while(!(nums[j]<0)){
                j++;
            }
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            i++;k++;j++;
        }
        return result;
    }
};