class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>result;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        int k=n/2;
        for(int i=0;i<k;i++){
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }
        return result;
    }
};