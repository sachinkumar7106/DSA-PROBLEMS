class Solution {
public:
    bool checkString(string s) {
        int a_ind=-1;
        int b_ind=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                a_ind=i;
            }
            if(s[i]=='b'){
                b_ind=i;
            }
            if(b_ind!=-1 && a_ind>b_ind){
                return false;
            }
        }
        return true;
    }
};