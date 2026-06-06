class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            if(res.empty()||res[0]!=nums[i]){
                if(freq[nums[i]]>n/3){
                    res.push_back(nums[i]);
                }
                if(res.size()==2){
                    return res;
                }
            }
        }
        return res;
    }
};