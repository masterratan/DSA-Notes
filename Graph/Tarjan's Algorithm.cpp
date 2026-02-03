class Solution {
public:
    // Tarjan's Algorithm to find Strongly Connected Components
    int timer = 1;
    void dfs(int node, int parent, vector<int> &vis, vector<vector<int>> &adj, vector<int> &tin, vector<int> &low, vector<vector<int>> &ans) {
        vis[node] = 1;
        tin[node] = low[node] = timer++;

        for (auto it : adj[node]) {
            if (it == parent) continue;

            if (!vis[it]) {
                dfs(it, node, vis, adj, tin, low, ans);
                low[node] = min(low[node], low[it]);

                // bridge condition
                if (low[it] > tin[node]) {
                    ans.push_back({node, it});
                }
            }
            else {
                // back-edge
                low[node] = min(low[node], tin[it]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        for (auto &e : connections) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> vis(n, 0), tin(n), low(n);
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, -1, vis, adj, tin, low, ans);
            }
        }

        return ans;
    }
};
