class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int v=adj.size();
        
        queue<int>q;
        vector<bool>visited(v,0);
        vector<int>res;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            res.push_back(temp);
            for(int i=0;i<adj[temp].size();i++){
                if(!visited[adj[temp][i]]){
                    visited[adj[temp][i]]=1;
                    q.push(adj[temp][i]);
                }
            }
        }
        return res;
    }
};