class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> vecNum;
        for(int i=0;i<=nums.size();i++){
            vecNum.push_back(i);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<vecNum.size()-1;i++){
            if(nums[i]!=vecNum[i]){
                return vecNum[i];
            }
        }
        return vecNum[vecNum.size()-1];
    }
};