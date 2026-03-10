class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pf(26,0);
        vector<int>sf(26,0);
        vector<int>ans;
        int np=p.length();
        int ns=s.length();
        if(np>ns){
            return ans;
        }
        for(int i=0;i<np;i++){
            pf[p[i]-'a']++;
            sf[s[i]-'a']++;
        }
        if(pf==sf){
            ans.push_back(0);
        }
        for(int i=np;i<ns;i++){
            sf[s[i]-'a']++;
            sf[s[i-np]-'a']--;
            if(sf==pf){
                ans.push_back(i-np+1);
            }
        }
        return ans;
    }
};