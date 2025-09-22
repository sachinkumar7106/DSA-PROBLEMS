class Solution {
public:

    void getLPS(vector<int> &lps,string s) {
        // code here
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
    int kmp_match(string str1 ,string str2) {
        vector<int> lps(str2.size(),0);
        getLPS(lps,str2);
        int first=0,second=0;
        while(second<str2.size()&&first<str1.size()){
            //match
            if(str1[first]==str2[second]){
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
        if(second==str2.size()){
            return 1;
        }else{
            return 0;
        }
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b){
            return 1;
        }
        int repeat=1;
        string temp=a;

        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }

        if(kmp_match(temp,b)==1){
            return repeat;
        }
        if(kmp_match(temp+a,b)==1){
            return repeat+1;
        }
        return -1;
    }
};