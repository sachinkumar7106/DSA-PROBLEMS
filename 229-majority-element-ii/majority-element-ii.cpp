class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0,ele1;
        int cnt2=0,ele2;
        for(int i=0;i<n;i++){
            if(cnt1==0&&ele2!=nums[i]){
                cnt1++;
                ele1=nums[i];
            }else if(cnt2==0&&ele1!=nums[i]){
                cnt2++;
                ele2=nums[i];
            }else if(ele1==nums[i]){
                cnt1++;
            }else if(ele2==nums[i]){
                cnt2++;
            }else{
                cnt1--;cnt2--;
            }
        }
        vector<int>res;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(ele1==nums[i]){
                count1++;
            }
            if(ele2==nums[i]){
                count2++;
            }
        }
        if(count1>n/3){
            res.push_back(ele1);
        }
        if(count2>n/3){
            res.push_back(ele2);
        }
        return res;
    }
};