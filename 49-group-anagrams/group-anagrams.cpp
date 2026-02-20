class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        vector<string>sorted(n);
        for(int i=0;i<n;i++){
            sorted[i]=strs[i];
            sort(sorted[i].begin(),sorted[i].end());
        }
        vector<bool>checked(n,0);
        for(int i=0;i<n;i++){
            vector<string>vec;
            for(int j=0;j<n;j++){
                if(sorted[i]==sorted[j]){
                    if(!checked[j]){
                        checked[j]=1;
                        vec.push_back(strs[j]);
                    }
                }
            }
            if(vec.size()!=0)
            ans.push_back(vec);
        }
        return ans;
    }
};