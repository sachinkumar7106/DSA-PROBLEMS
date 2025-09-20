class Solution {
  public:
    void getLPS(vector<int>&lps,string pat) {
        int pre=0,suf=1;
        while(suf<pat.size()){
            //matched 
            if(pat[pre]==pat[suf]){
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
    vector<int> search(string &pat, string &txt) {
        // code here
        vector<int>lps(pat.size(),0);
        getLPS(lps,pat);
        vector<int> ans;
        int first=0,second=0;
        while(first<txt.size()){
            //matched
            if(txt[first]==pat[second]){
                first++,second++;
            }
            //not matched
            else{
                if(second==0){
                    first++;
                }else{
                    second=lps[second-1];
                }
            }
            if(second==pat.size()){
                ans.push_back(first-second);
                second=lps[second-1];
            }
        }
        return ans;
    }
};