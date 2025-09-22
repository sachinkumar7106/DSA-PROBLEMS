class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> occurence(100,0);
        for (int i=0;i<nums.size();i++){
            occurence[nums[i]-1]++;
        }
        int maxi=INT_MIN;
        for (int i=0;i<occurence.size();i++){
            maxi=max(maxi, occurence[i]);
        }
        int count=0;
        for (int i=0;i<occurence.size();i++){
            if(occurence[i]==maxi){
                count+= maxi;
            }
        }
        return count;
    }
};