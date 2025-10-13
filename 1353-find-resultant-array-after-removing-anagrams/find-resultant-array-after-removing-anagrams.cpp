class Solution {
public:
    bool isAnagram(string a, string b) {
        if (a.size() != b.size())
            return false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        for (string& w : words) {
            if (!result.empty() && isAnagram(result.back(), w)) {
                continue; // remove current word (skip it)
            }
            result.push_back(w);
        }
        return result;
    }
};