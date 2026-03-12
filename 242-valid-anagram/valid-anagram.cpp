class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sf(26,0);
        vector<int> tf(26,0);

        for(int i=0;i<s.size();i++){
            sf[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            tf[t[i]-'a']++;
        }

        return sf==tf;
    }
};