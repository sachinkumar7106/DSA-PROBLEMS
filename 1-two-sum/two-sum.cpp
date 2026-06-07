class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>>index;
        int n=nums.size();
        for(int i=0;i<n;i++){
            index.push_back({nums[i],i});
        }
        sort(index.begin(),index.end());
        int i=0,j=nums.size()-1;

        while(i<j){
            int sum=index[i].front()+index[j].front();
            if(sum==target){
                return {index[i].back(),index[j].back()};
            }
            else if(sum>target){
                j--;
            }else{
                i++;
            }
        }
        return {-1,-1};
    }
};