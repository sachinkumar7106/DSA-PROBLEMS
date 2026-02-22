class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstmax=LLONG_MIN,secondmax=LLONG_MIN,thirdmax=LLONG_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==firstmax||nums[i]==secondmax||nums[i]==thirdmax){
                continue;
            }
            if(firstmax<nums[i]){
                thirdmax=secondmax;
                secondmax=firstmax;
                firstmax=nums[i];
            }
            else if(nums[i]>secondmax){
                thirdmax=secondmax;
                secondmax=nums[i];
            }
            else if(nums[i]>thirdmax){
                thirdmax=nums[i];
            }
        }
        if(thirdmax==LLONG_MIN){
            return firstmax;
        }
        else{
            return thirdmax;
        }
    }
};