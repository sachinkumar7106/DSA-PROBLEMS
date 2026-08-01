class Solution {
public:
    int countValidPrefixes(string s) {
        int count0=0,count1=0,res=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0++;
            }
            if(s[i]=='1'){
                count1++;
            }
            int diff=abs(count0-count1);
            if(diff==0||diff==1){
                res++;
            }
        }
        return res;
    }
};