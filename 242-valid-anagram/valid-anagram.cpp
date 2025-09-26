class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count_s_letters(26,0);
        vector<int> count_t_letters(26,0);

        for(int i=0;i<s.size();i++){
            count_s_letters[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            count_t_letters[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(count_s_letters[i]!=count_t_letters[i]){
                return 0;
            }
        }
        return 1;
    }
};