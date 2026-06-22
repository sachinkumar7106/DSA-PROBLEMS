class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        int m=mat[0].size();
        // Code here
        vector<pair<int,pair<int,int>>>temp;
        for(int i=0;i<mat.size();i++){
            temp.push_back(make_pair(mat[i][0],make_pair(i,0)));
        }
        priority_queue<
            pair<int,pair<int,int>>,
            vector<pair<int,pair<int,int>>>,
            greater<pair<int,pair<int,int>>>
            > p(temp.begin(), temp.end());        
        vector<int>ans;
        
        pair<int,pair<int,int>>ele;
        int i, j;
        while(!p.empty()){
            ele=p.top();
            p.pop();
            ans.push_back(ele.first);
            i=ele.second.first;
            j=ele.second.second;
            if(j+1<m){
                p.push(make_pair(mat[i][j+1],make_pair(i,j+1)));
            }
        }
        return ans;
    }
};