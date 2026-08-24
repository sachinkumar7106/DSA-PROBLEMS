class Solution {
	public:
	bool isBipartite(int V, vector<vector<int>> &edges) {
		// Code here
		vector<vector<int>> adj(V);
		for (auto& e:edges) {
			int a = e[0];
			int b = e[1];
			adj[a].push_back(b);
			adj[b].push_back(a);
			
		}
		
		vector<int>color(V, -1);
		queue<int>q;
		
		for (int i = 0; i<V; i++) {
			if (color[i] == -1) {
				q.push(i);
				color[i] = 0;
				while (!q.empty()) {
					int node = q.front();
					q.pop();
					for(int j=0;j<adj[node].size();j++){
					    if(color[adj[node][j]]==-1){
					        color[adj[node][j]]=(color[node]+1)%2;
					        q.push(adj[node][j]);
					    }
					    else{
					        if(color[node]==color[adj[node][j]]){
					            return false;
					        }
					    }
					}
				}
			}
		}
		return true;
	}
};
