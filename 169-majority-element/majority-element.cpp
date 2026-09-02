class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int f=0,res=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(f==0){
                res=nums[i];
            }
            if(res!=nums[i]){
                f--;
            }else{
                f++;
            }
        }
        return res;
    }
};