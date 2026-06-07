class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                unordered_set<int>seen;
                for(int k=j+1;k<n;k++){
                    long long comple=(long long)target-nums[i]-nums[j]-nums[k];
                    if (comple < INT_MIN || comple > INT_MAX) {
                        seen.insert(nums[k]);
                        continue;
                    }

                    if(seen.count(comple)){
                        vector<int>temp={nums[i],nums[j],nums[k],(int)comple};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    seen.insert(nums[k]);
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};