class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>vecOfNum;
        for(int i=0;i<=nums.size();i++){
            vecOfNum.push_back(i);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<vecOfNum.size()-1;i++){
            if(vecOfNum[i]!=nums[i]){
                return vecOfNum[i];
            }
        }
        return vecOfNum[vecOfNum.size()-1];
    }
};