class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int>seen(n+1,0);
        for(int i=0;i<n;i++){
            seen[nums[i]]++;
        }
        for(int i=0;i<n+1;i++){
            if(seen[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};