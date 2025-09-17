class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> pangram(26,0);
        int n=sentence.size(),ind=0;
        while(ind<n){
            char ch=sentence[ind];
            int index=ch-'a';
            pangram[index]=1;
            ind++;
        }
        int check_ind=0;
        while(check_ind<26){
            if(pangram[check_ind]==0){
                return false;
            }
            check_ind++;
        }
        return true;
    }
};