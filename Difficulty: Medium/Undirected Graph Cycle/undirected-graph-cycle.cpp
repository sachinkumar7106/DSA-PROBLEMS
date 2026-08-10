class Solution {
  public:
    bool bfs(int start,vector<vector<int>>adj,vector<int>&visited){
        queue<pair<int,int>>q;
        visited[start]=1;
        q.push(make_pair(start,-1));
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(int n:adj[node]){
                //not visited
                if(!visited[n]){
                    visited[n]=1;
                    q.push(make_pair(n,node));
                }
                //already visited and not the parent
                else if(n!=parent){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int>visited(V,0);
        vector<vector<int>>adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(bfs(i,adj,visited)){
                    return true;
                }
            }
        }
        return false;
    }
};