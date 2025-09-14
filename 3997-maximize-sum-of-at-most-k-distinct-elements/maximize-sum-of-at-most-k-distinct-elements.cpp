class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
       
        unordered_set<int> arr(nums.begin(),nums.end());
        vector<int> temp(arr.begin(),arr.end());
        sort(temp.rbegin(),temp.rend());
        vector <int> ans;
        int len=temp.size();
        if(len<k){
            for(int i=0;i<len;i++){
                ans.push_back(temp[i]);
            }
            return ans;
        }else{
            for(int i=0;i<k;i++){
                ans.push_back(temp[i]);
            }
            return ans;
        }
    }
};