class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mp;
        mp[0]=1;
        int x=0;
        int count=0;
        for(int i:arr){
            x^=i;
            int tar=x^k;
            if(mp.find(tar)!=mp.end()){
                count+=mp[tar];
            }
            mp[x]++;
        }
        return count;
    }
};