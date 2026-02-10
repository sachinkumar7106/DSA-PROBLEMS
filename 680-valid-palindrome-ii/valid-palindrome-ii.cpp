class Solution {
public:
    bool ispalindrome(string a,int l, int r){
        while(l<r){
            if(a[l]!=a[r]){
                return false;
            }
            l++;r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1;
        if(ispalindrome(s,l,r)){
            return true;
        }
        while(l<r){
            if(s[l]!=s[r]){
                return ispalindrome(s,l+1,r)||ispalindrome(s,l,r-1);
            }
            l++;
            r--;
        }
        return false;
    }
};