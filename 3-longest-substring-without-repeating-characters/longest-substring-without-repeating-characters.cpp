class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int>freq(256,0);
        int l=0,r=0,maxlen=0;
        while(r<n){
            while(freq[s[r]]){
                freq[s[l]]=0;
                l++;
            }
            freq[s[r]]=1;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};