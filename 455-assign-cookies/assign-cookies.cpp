class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int stu=0;
        int coo=0;
        while(stu<g.size()&&coo<s.size()){
            if(s[coo]>=g[stu]){
                stu++;
            }
            coo++;
        }
        return   stu;
    }
};