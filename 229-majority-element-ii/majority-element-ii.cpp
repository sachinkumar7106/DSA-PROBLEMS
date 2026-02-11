class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int freq=0;
            if(result.size()==0||result[0]!=nums[i]){
                for(int j=0;j<n;j++){
                    if(nums[i]==nums[j]){
                        freq++;
                    }
                }
                if(freq>n/3){
                    result.push_back(nums[i]);
                    if(result.size()==2){
                        return result;
                    }
                }
            }
        }
        return result;
    }
};