class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int n=mat.size();
        
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;
        int ans;
        pair<int,pair<int,int>>ele;
        for(int i=0;i<n;i++){
            p.push(make_pair(mat[i][0],make_pair(i,0)));
        }
        
        int i,j;
        while(k--){
            ele=p.top();
            p.pop();
            ans=ele.first;
            i=ele.second.first;
            j=ele.second.second;
            if(j+1<n){
                p.push(make_pair(mat[i][j+1],make_pair(i,j+1)));
            }
        }
        return ans;
    }
};
