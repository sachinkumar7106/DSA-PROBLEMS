class Solution {
public:
    void findsub(int index,vector<int>&nums,vector<int>&vec,set<vector<int>> &result){
        if(index==nums.size()){
            result.insert(vec);
            return;
        }
        vec.push_back(nums[index]);
        findsub(index+1,nums,vec,result);
        vec.pop_back();
        findsub(index+1,nums,vec,result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>result;
        vector<int>vec;
        sort(nums.begin(),nums.end());
        findsub(0,nums,vec,result);
        return vector<vector<int>>(result.begin(),result.end());
    }
};