class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int countsub=0;
        for(int i=0;i<nums.size();i++){
            int freq=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]==target){
                    freq++;
                }
                int length=j-i+1;
                if(freq>length/2){
                    countsub++;
                }
            }
        }
        return countsub;
    }
};