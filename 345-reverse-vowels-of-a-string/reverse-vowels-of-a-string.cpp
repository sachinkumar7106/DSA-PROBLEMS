class Solution {
public:
    bool isvowel(char ch){
        ch=tolower(ch);
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string reverseVowels(string s) {
        string vowel="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                vowel+=s[i];
            }
        }
        int k=vowel.length()-1;
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                s[i]=vowel[k];
                k--;
            }
        }
        return s;
    }
};