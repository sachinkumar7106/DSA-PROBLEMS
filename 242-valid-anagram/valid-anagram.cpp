class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>fr(26,0);

        for(int i=0;i<s.size();i++){
            fr[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            fr[t[i]-'a']--;
        }
        for(int i:fr){
            if(i!=0){
                return false;
            }
        }

        return true;
    }
};