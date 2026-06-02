class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0=count0 + 1;
            }
            if(nums[i]==1){
                count1= count1 + 1;
            }
        }
        for(int i=0;i<n;i++){
            if(count0){
                nums[i]=0;
                count0--;
            }else if(count1){
                nums[i]=1;
                count1--;
            }else{
                nums[i]=2;
            }
        }

    }
};