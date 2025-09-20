class Solution {
public:
    void getLPS(vector<int> &lps,string s) {
        int pre=0,suf=1;
        while(suf<s.size()){
            //matched 
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                pre++,suf++;
            }
            //not matched
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }else{
                    pre=lps[pre-1];
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        vector<int> lps(needle.size(),0);
        getLPS(lps,needle);
        int first=0,second=0;
        while(second<needle.size()&&first<haystack.size()){
            //match
            if(haystack[first]==needle[second]){
                first++,second++;
            }
            //not match
            else{
                if(second==0){
                    first++;
                }else{
                    second=lps[second-1];
                }
            }
        }
        if(second==needle.size()){
            return first-second;
        }else{
            return -1;
        }
    }
};
