class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(auto i:nums){
            int temp=i;
            while(temp){
                if(temp%10==digit){
                    count++;
                }
                temp/=10;
            }
        }
        return count;
    }
};