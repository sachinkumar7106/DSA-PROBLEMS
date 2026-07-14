class Solution {
  public:
    bool cycle(int node,int par,vector<vector<int>>&edges,vector<bool>&visited){
        visited[node]=1;
        for(int i=0;i<edges[node].size();i++){
            if(par==edges[node][i]){
                continue;
            }
            if(visited[edges[node][i]]==1){
                return 1;
            }
            if(cycle(edges[node][i],node,edges,visited)){
                return 1;
            }
        }
        return 0;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj(V);
        vector<bool> visited(V, 0);
        
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (cycle(i, -1, adj, visited)){
                    return 1;
                }
            }
        }

        return 0;
    }
};