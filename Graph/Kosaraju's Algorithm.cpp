// Kosaraju's Algorithm
// Step1: Store order of dfs in stack.
// Step2: Make a reverse graph
// Step3: Call dfs based on stack order & SCC cnt++ for each call.
class Solution{
public:
    void dfsFill(int u, vector<int> adj[], vector<bool> &vis, stack<int> &st){
        vis[u] = true;
        for(int &v : adj[u]){
            if(!vis[v]) dfsFill(v, adj, vis, st);
        }
        st.push(u);
    }
    void dfsTraversal(int u, vector<vector<int>> &adjReversed, vector<bool> &vis){
        vis[u] = true;
        for(int &v: adjReversed[u]){
            if(!vis[v]) dfsTraversal(v, adjReversed, vis);
        }
    }
    int kosaraju(int V, vector<int> adj[]){
        stack<int> st;
        vector<bool> vis(V, false);
        for(int i=0; i<V; i++){
            if(!vis[i]) dfsFill(i, adj, vis, st);
        }
        vector<vector<int>> adjReversed(V);
        for(int u=0; u<V; u++){
            for(int &v: adj[u]){ // v -> u
                adjReversed[v].push_back(u);
            }
        }
        int cnt = 0;
        vis = vector<bool>(V, false);
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(!vis[node]){
                dfsTraversal(node, adjReversed, vis);
                cnt++;
            }
        }
        return cnt;
    }
};
