class Solution {
public:
    string minWindow(string s, string t) {
        int i=0,j=0,n=s.length(),total=t.length();
        int ans=INT_MAX,ind;
        unordered_map<char,int>mp;
        for(char ch:t){
            mp[ch]++;
        }

        while(j<n){
            mp[s[j]]--;
            if(mp[s[j]]>=0){
                total--;
            }
            while(!total&&i<=j){
                if(ans>(j-i+1)){
                    ans=j-i+1;
                    ind=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    total++;
                }
                i++;
            }
            j++;
        }
        return ans==INT_MAX?"":s.substr(ind,ans);
    }
};