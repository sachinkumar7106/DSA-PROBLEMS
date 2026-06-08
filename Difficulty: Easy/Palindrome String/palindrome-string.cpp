class Solution {
  public:
    bool palind(string& s,int st, int en){
        if(st>=en){return true;}
        if(s[st]!=s[en]){return false;}
        return palind(s,st+1,en-1);
    }
    bool isPalindrome(string& s) {
        // code here
        int n=s.length();
        return palind(s,0,n-1);
    }
};