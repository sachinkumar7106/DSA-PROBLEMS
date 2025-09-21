class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        vector<int> even;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
        }
        if(even.size()==0){
            return 0;
        }else if(even.size()==1){
            return even[0];
        }else{
            int ans=0;
            for(int i=0;i<even.size();i++){
                ans=ans|even[i];
            }
            return ans;
        }
    }
};