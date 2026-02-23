class Solution {
public:
    int vowelConsonantScore(string s) {
        int n=s.length();
        int v=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                v++;
            }
            else if(isalpha(s[i])){
                c++;
            }
        }
        if(c>0){
            int ans=v/c;
            return ans;
        }
        else{
            return 0;
        }
    }
};