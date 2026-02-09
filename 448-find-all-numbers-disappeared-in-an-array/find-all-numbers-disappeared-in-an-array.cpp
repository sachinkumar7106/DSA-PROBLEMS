class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        vector<bool>Seen(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            Seen[nums[i]-1]=1;
        }
        for(int i=0;i<nums.size();i++){
            if(Seen[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};