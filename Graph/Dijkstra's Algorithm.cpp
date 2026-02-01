class Solution{
public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int src) {
        vector<int> dist(V, 1e9);
        dist[src] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0, src});
        while(!pq.empty()){
            auto [d, u] = pq.top();
            pq.pop();
            if(d > dist[u]) continue;
            for(auto e : adj[u]){
                int v = e[0];
                int wt = e[1];
                if(dist[v] > dist[u] + wt){
                    dist[v] = dist[u] + wt;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }
};