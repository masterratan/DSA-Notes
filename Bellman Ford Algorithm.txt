class Solution {
public:
	vector<int> bellman_ford(int V, vector<vector<int>>& edges, int src) {
		vector<vector<pair<int,int>>> adj(V);
		for(auto edge : edges){
			int u = edge[0];
			int v = edge[1];
			int wt = edge[2];
			adj[u].push_back({v,wt});
		}
		vector<int> dist(V, 1e9);
		dist[src] = 0;
		for(int i=1; i<V; i++){
			for(int u=0; u<V; u++){
				for(auto p : adj[u]){
					int v = p.first;
					int wt = p.second;
					if(dist[u] != 1e9 && dist[v] > dist[u] + wt){
						dist[v] = dist[u] + wt;
					}
				}
			}
		}
		// negative weight cycles
		for(int u=0; u<V; u++){
			for(auto p : adj[u]){
				int v = p.first;
				int wt = p.second;
				if(dist[u] != 1e9 && dist[v] > dist[u] + wt){
					return {-1};
				}
			}
		}
		return dist;
	}
};
