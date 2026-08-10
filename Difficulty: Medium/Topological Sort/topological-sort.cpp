class Solution {
  public:
    void dfs(int node,vector<vector<int>>&adj,vector<int>&visited,stack<int>&st){
        visited[node]=1;
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                dfs(adj[node][i],adj,visited,st);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>visited(V,0);
        vector<vector<int>>adj(V);
        for (auto& e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
        }
        vector<int> ans;
        stack<int>st;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};