class Solution {
public:
    string shift(string s){
        char first = s[0];
        int index=1;
        while(index<s.size()){
            s[index-1]=s[index];
            index++;
        }
        s[s.size()-1]=first;
        return s;
    }
    bool rotateString(string s, string goal) {
        string s1=s;
        for(int i=0;i<s.size();i++){
            s1=shift(s1);
            if(s1==goal){
                return true;
            }
        }
        return false;
    }
};