class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        int numsize=nums.size();
        int setsize=s.size();
        if(numsize==setsize){
            return false;
        }
        return true;
    }
};