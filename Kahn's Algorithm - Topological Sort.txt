class Solution{
public:
    // Kahn's Algorithm -> Topo Sort using BFS
    vector<int> topoSort(int V, vector<int> adj[]){
        vector<int> inDeg(V, 0);
        for(int i=0; i<V; i++){
            for(auto &v : adj[i]) inDeg[v]++;
        }
        queue<int> q;
        vector<int> res;
        for(int i=0; i<V; i++){
            if(inDeg[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int u = q.front();
            q.pop();
            res.push_back(u);
            for(auto &v : adj[u]){
                inDeg[v]--;
                if(inDeg[v] == 0) q.push(v);
            }
        }
        return res;
    }
};

// class Solution{
// public:
//     void dfs(int u, vector<bool> &vis, stack<int> &st, vector<int> adj[]){
//         vis[u] = true;
//         for(int v : adj[u]){
//             if(!vis[v]) dfs(v, vis, st, adj);
//         }
//         st.push(u); // jb tk sara child na push ho jaye, tb tk push nhi krenge, recursion laut-te waqt sare child ko stack mei push krte hue lautega
//     }
//     vector<int> topoSort(int V, vector<int> adj[]){
//         vector<bool> vis(V, false);
//         stack<int> st;
//         for(int i=0; i<V; i++){
//             if(!vis[i]){
//                 dfs(i, vis, st, adj);
//             }
//         }
//         vector<int> res;
//         while(!st.empty()){
//             res.push_back(st.top());
//             st.pop();
//         }
//         return res;
//     }
// };
