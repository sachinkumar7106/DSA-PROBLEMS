class Solution {
public:
    string removeDuplicates(string s) {
        int j=-1;
        string str="";
        int n=s.length();
        for(int i =0;i<n;i++){
            if(j==-1){
                str+=s[i];
                j++;
            }else{
                if(str[j]==s[i]){
                    str.erase(j,1);
                    j--;
                }else{
                    str+=s[i];
                    j++;
                }
            }
        }
        return str;
    }
};